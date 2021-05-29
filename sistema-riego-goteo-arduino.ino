/*POSIBLES CASOS

1 Nivel bajo de agua. Muestra temp/hum y humedad del suelo. Da aviso rellenar tanque
2 Nivel agua OK. Aviso nivel OK
      2.1 Humedad suelo OK. Muestra temp/hum y humedad suelo
      2.2 Humedad suelo NO OK. Muestra temp/hum y humedad suelo. Comienza riego.
*/

#include <DHT.h>//Incluyo la librería del sensor DHT11

////////////////////////////////Para la pantalla LCD
#include <LiquidCrystal_I2C.h> // Debe descargar la Libreria que controla el I2C
LiquidCrystal_I2C lcd(0x27, 16, 2); //SI no va, se puede poner 0x20 para probar
//el modulo es de 16 por 2. el protocolo es 0x27. si no va, probar con 0x20

//Pines del módulo I2C
//VCC GND SON LA TENSIÓN Y LA TIERRA
//SDA VA AL A4
//SCL VA AL A5

#define ldr_pin A2

//////////////////////////Configuro pines y variables
int ledHumedad = 7;
int ledLluvia = 6;
int ledBomba = 5;

int sensor = 2;//Pin 2 para el valor del sensor DHT11
int temp, humedad;//Configuro las variables de temperatura y humedad del DHT11
int boton = 3;//Pin 3 para activar manualmente la bomba
const int bomba = 13; //Pin 13 para la bomba
const int humedadsuelo = A0; //A0 para la humedad del suelo

const int bajo =9; // pin 9 nivel agua bajo
const int alto =8; // pin 8 nivel agua alto
int rele =10; // rele para activar electrovalvula

int lluvValue =0;
int lluvia;
int sensorLluvia = A3;
bool noche;
char momento;

DHT dht (sensor, DHT11);//Configuro el modelo de DHT. Es el DHT11
int botonest = 0; //Inicializamos a 0 el estado del boton

///////////////////////////////Parte de humedad suelo y riego

void setup()
{
  Serial.begin(9600);//Arrancamos el puerto serie a 9600
  dht.begin();//Arranco el sensor DHT11

  //Configuramos entradas y salidas
  pinMode(humedadsuelo, INPUT);//Configuro humedadsuelo como entrada
  pinMode(bomba, OUTPUT);//Configuro bomba como salida
  pinMode(boton, INPUT);//Configuro en boton como entrada
  pinMode(bajo, INPUT); //Configuro en nivel de agua bajo como entrada
  pinMode(alto, INPUT); //Configuro en nivel de agua alto como entrada
  pinMode(rele, OUTPUT); //Configuro en rele como salida  
  pinMode( ledHumedad, OUTPUT) ;
  pinMode( ledLluvia, OUTPUT) ;
  pinMode( ledBomba, OUTPUT) ;

  //Para la pantalla LCD
  lcd.init(); //Inicializamos el LCD
  lcd.backlight(); //Activamos la luz de fondo
  lcd.clear(); //Limpiamos lo que haya en pantalla
  lcd.setCursor(0, 0); //Iniciamos el cursor en el punto 0,0
}

void loop()
{
  int SensorValue = analogRead(humedadsuelo);//Leo el valor de la humedad y lo meto en SensorValue
  int botonest = digitalRead(boton);//Leo lo que marca el boton
  int estadobajo = digitalRead(bajo); //leo nivel agua bajo
  int estadoalto= digitalRead(alto); //leo nivel agua alto
  
  int humedadsuelo = map(SensorValue, 1023, 0, 0, 100);
  
  int lluvValue =map (analogRead(sensorLluvia), 1023, 0,100, 0);
  int ldr_value = map(analogRead(ldr_pin), 1023, 0, 50, 0);

  //Leo y meto los valores de temperatura y humedad en las variables temp y humedad
  humedad = dht.readHumidity();
  temp = dht.readTemperature();

  /////Puerto serie
  //Imprimo por el puerto serie los valores de temperatura y humedad del DHT11
  Serial.print("Temperatura: "); Serial.print(temp);
  Serial.print("ºC Humedad: "); Serial.print(humedad); Serial.println("%");

  //Imprimo por el puerto serie el valor de la humedad del suelo
  Serial.print("Humedad del suelo: "); Serial.print(humedadsuelo); Serial.println("%");
  delay(500);

  /////Para mostrarlo en el LCD

  lcd.init(); //Inicializamos el LCD
  lcd.backlight(); //Activamos la luz de fondo
  lcd.clear();//blanqueamos la pantalla
  lcd.setCursor(0, 0); //Posicion: columna cero fila cero
  lcd.print("Luz:");
  lcd.print(ldr_value);
  lcd.print("%");
  lcd.setCursor(0, 1); //Posicion: columna cero fila uno
  lcd.print("Humedad Suelo:");
  lcd.print(humedadsuelo);
  lcd.print("%");
  



  ///*********** CONDICIONES DE RIEGO ***********

  if(estadobajo==0 && estadoalto==1){
    lcd.clear();//blanqueamos la pantalla
    lcd.setCursor(0, 0); //Posicion: columna cero fila cero
    lcd.print("Llenando tanque");
    lcd.setCursor(0, 1); //Posicion: columna cero fila cero
    lcd.print("Por favor espere");
    while(estadobajo !=1 && estadoalto !=0){
      digitalWrite(rele, LOW);
      estadobajo = digitalRead(bajo);
      estadoalto= digitalRead(alto);
    }
    digitalWrite(rele, HIGH);
  }

  if (estadobajo == 0 && botonest == 0)
  { Serial.println("Imposible regar, nivel bajo de agua. Debe rellenar el tanque");
    lcd.clear();//blanqueamos la pantalla
    lcd.setCursor(0, 0); //Posicion: columna cero fila cero
    lcd.print("IMPOSIBLE REGAR");
    lcd.setCursor(0, 1); //Posicion: columna cero fila cero
    lcd.print("Nivel bajo");
  }

  if (estadobajo == 1)
  {
    Serial.println("Nivel de agua correcto, se puede regar");

    if (SensorValue >= 500 && ldr_value < 30 && temp < 30 && lluvValue < 15) // el valor que considero seco y hay que regar es de 700
    {
      digitalWrite(rele, HIGH);
      digitalWrite(ledHumedad, LOW) ; 
      // Si la tierra está seca, comenzara a regar
      // Riega durante 2 segundoS y espera a comprobar la humedad otro segundo
      Serial.println("La tierra está seca, comienza el riego automático");
      lcd.clear();//blanqueamos la pantalla
      lcd.setCursor(0, 0); //Posicion: columna cero fila cero
      lcd.print("Riego automatico");
      lcd.setCursor(0, 1); //Posicion: columna cero fila uno
      lcd.print("Hum Suelo:");
      lcd.print(humedadsuelo);
      lcd.print("%");
      digitalWrite(bomba, HIGH);
      digitalWrite(ledBomba, HIGH);
      delay(4000);
      digitalWrite(bomba, LOW);
      digitalWrite(ledBomba, LOW);
      delay(1000);

      if (botonest == 0)
      { Serial.println("No se puede activar riego manual. Riego automático activo");
        lcd.clear();//blanqueamos la pantalla
        lcd.setCursor(0, 0); //Posicion: columna cero fila cero
        lcd.print("Regando automatico");
        lcd.setCursor(0, 1); //Posicion: columna cero fila cero
        lcd.print("NO MANUAL");
        delay(1000);

      }
      } else if(lluvValue > 15){
        digitalWrite(ledLluvia, HIGH);
        lcd.clear();//blanqueamos la pantalla
        lcd.setCursor(0, 0); //Posicion: columna cero fila cero
        lcd.print("Sistema Apagado");
        lcd.setCursor(0, 1); //Posicion: columna cero fila cero
        lcd.print("Lloviendo...");
        }else{
          digitalWrite(ledLluvia, LOW);
          Serial.println("NO Detectada lluvia");  
        }

    if (SensorValue < 500) //No es necesario el riego automático, pero se puede regar de forma manual
    {
      digitalWrite(rele, HIGH);
      digitalWrite(ledHumedad, HIGH);
      if (botonest == 0) {
        Serial.println("Regando de forma manual");
        lcd.clear();//blanqueamos la pantalla
        lcd.setCursor(0, 0); //Posicion: columna cero fila cero
        lcd.print("Riego manual");
        lcd.setCursor(0, 1); //Posicion: columna cero fila uno
        lcd.print("Hum Suelo:");
        lcd.print(humedadsuelo);
        lcd.print("%");
        digitalWrite(bomba, HIGH);
        digitalWrite(ledBomba, HIGH);
      }
      if (botonest == 1) {
        digitalWrite(bomba, LOW);
        digitalWrite(ledBomba, LOW);
      }
    }
  }
}
