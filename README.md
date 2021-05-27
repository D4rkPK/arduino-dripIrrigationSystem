
#
`	`***Correlativo No. 001 Versión No. 01*** 

**Documento de Especificaciones, Requerimientos y Criterios de** 

**Aceptación de Software** 
**


1. **DATOS GENERALES DEL SOLICITANTE:** 
**


**Lugar y fecha:** 

|<p>Ubicación: </p><p>**(Región Geográfica)** </p>|<p>Zacapa, Zacapa. </p><p> </p>|
| :- | :- |
|<p>Dirección: (Unidad </p><p>Administrativa) </p>|Universidad Mariano Gálvez |
|<p>Fecha: </p><p> </p>|09 de mayo de 2021 |
** 

**Sistema, Aplicación o Programa:**   

|Nombre:  |Ranchón Cameros|
| :- | :- |
|Módulo: |Sistema de riego por goteo|
|Componente: |Agricultura|
** 

1. **FUNCIONALIDAD GENERAL REQUERIDA (OBJETIVOS Y ALCANCE - concretos, medibles, realizables):** 
**


|<p>Creación sistema Validaciones con las siguientes características: </p><p>A. **Detectar valores de humedad** </p><p>B. **Detectar nivel de luz solar** </p><p>C. **Detectar el nivel de liquido de la fuente de agua**</p><p>D. **Mostrar valores en una pantalla**</p>|
| :- |
** 

1. **COMPONENTES DEL PROYECTO**


|**Para simulación de terreno**|**Componentes electrónicos** |
| - | - |
|<p>- Maceta</p><p>- Tubo para goteo</p><p>- Boquilla de goteo</p><p></p><p></p>|<p>- Arduino Nano</p><p>- Breadboard</p><p>- Sensor de temperatura / humedad DHT11</p><p>- Resistencia LDR</p><p>- Sensor de lluvia</p><p>- Pantalla LCD de 16 pines</p><p>- Sensor de humedad del suelo YL-69</p><p>- Bomba de agua</p><p>- Diodo 1N4007</p><p>- Sensor de nivel de líquido FS-28</p><p>- Transistor PN2222</p><p>- 4 resistencias 220 Ohm</p><p>- resistencia de 10K Ohm</p><p>- Cables</p>|


1. **DETALLE DE FUNCIONALIDAD**

|**Tipo de Requerimiento**|**Descripción, Justificación o detalles a tomar en cuenta**|
| :-: | :-: |
|<p>Funcionalidad 1</p><p></p>|<p>- **Detectar valores de Humedad**</p><p>El sistema llevara un control de humedad tanto por tierra y por aire. Y el riego dependerá si estos valores se encuentran bajos.</p><p></p>|
|<p>Funcionalidad 2</p><p></p>|<p>- **Detectar luz**</p><p>El sistema funcionará al detectar la luz del sol y este se detendrá al llegar a un cierto nivel de humedad en la tierra.</p><p></p>|
|<p>Funcionalidad 3</p><p></p>|<p>- **Detectar humedad en el aire**</p><p>En caso de no haber luz solar (un día nublado) y el nivel de humedad en el aire es bajo por las altas temperaturas el sistema empezara a funcionar y se detendrá hasta que la tierra llegue a su nivel de humedad deseado.</p><p></p>|
|<p>Funcionalidad 4</p><p></p>|<p>- **Control de nivel de agua**</p><p>Se llevará un control de nivel de líquido en la fuente de agua (pozo o cisterna) y el sistema hará una advertencia cuando este nivel sea bajo. </p><p></p>|
|<p>Funcionalidad 5</p><p></p>|<p>- **Control de datos por pantalla**</p><p>El sistema tendrá una pantalla donde podrá consultar el nivel de humedad de la tierra en porcentaje</p><p>** </p>|
|<p>Funcionalidad 6</p><p></p>|<p>- **Leds de advertencia** </p><p>- Led para indicar funcionamiento de la bomba.</p><p>- Led para indicar si la humedad del suelo está baja.</p><p>- Led para indicar que la humedad en el aire es alta (lluvia) y por tanto no se regará. </p><p></p>|















1. **ESQUEMA ELECTRICO**

![](Aspose.Words.f385e70e-9b97-400c-af57-c57cd2531767.001.png)















1. **DESCRIPCION DE CASOS**

El LCD se enciende y apaga con el micro interruptor por señal digital. Además, hay un botón para riego manual. El riego se hace a través una bomba de agua. 

Las condiciones son las siguientes:

1. Nivel bajo de agua. Muestra temp/hum y humedad del suelo. Da aviso rellenar tanque. 

LCD on/off.  

1. Activo bomba. Muestra temp/hum y humedad del suelo. Da otro aviso: No se puede regar, rellenar tanque. LCD on/off. 

1. Nivel agua OK. Muestra temp/hum y humedad del suelo. Aviso nivel OK. LCD on/off 

1. Humedad suelo OK. Muestra temp/hum y humedad del suelo. LCD on/off

1. Activo bomba. Comienza el riego.

1. Humedad suelo NO OK. Muestra temp/hum y humedad del suelo. Comienza riego automático. LCD on/off.

1. Activo bomba. Muestra aviso, no se puede activar riego manual. Riego    automático activo. LCD on/off.


1. **REFERENCIAS**



<https://www.youtube.com/watch?v=Z0SqhaNgpjI>

<https://www.youtube.com/watch?v=U2mXI67H6-A>

<https://www.youtube.com/watch?v=AzHuAoZFBEA>

<https://www.youtube.com/watch?v=MdCUvPTvpCo>

`	`*Documento de Especificaciones, Requerimientos y Criterios de Aceptación de Software -DERCAS- 	Página*  PAGE   \\* MERGEFORMAT *3 de*  NUMPAGES   \\* MERGEFORMAT *4* 

#

**Sistema de riego por goteo**

De forma muy general, se puede definir el Riego por Goteo como Riego Localizado. El riego por goteo o riego gota a gota es un método de irrigación que permite una óptima aplicación de agua y abonos en los sistemas agrícolas de las zonas áridas. El agua aplicada se infiltra en el suelo irrigando directamente la zona de influencia radicular a través de un sistema de tuberías y emisores que incrementan la productividad y el rendimiento por unidad de superficie. Esta técnica es la innovación más importante en agricultura desde la invención de los aspersores en los años 1930.

![Por qué elegir el riego por goteo sobre otras técnicas de irrigación? -](https://github.com/Brandonp22/sistema-riego-goteo-arduino/blob/main/imagenes/Aspose.Words.fb0048e7-002a-46c1-8cbe-51656c76b31f.002.jpeg)









**Ventajas del sistema de riego por goteo**

- Utilización de pequeños caudales a baja presión, optimizando el uso del agua de riego.
- Aumento del rendimiento por el trabajo y los recursos empleados, así como de la productividad por hectárea.
- Localización del agua en la proximidad de las plantas a través de un número variable de puntos de emisión.
- Al reducir el volumen de suelo mojado, y por tanto su capacidad de almacenamiento, se debe operar con una alta frecuencia de aplicación, a caudales pequeños. Cuando el agua está a mayor presión subirá mejor hacia lugares de mayor altura. En un sistema moderno de riego por goteo se controla la presión con una pequeña bomba eléctrica en cada parcela. Y recientemente se han desarrollado aplicaciones de telefonía móvil o de internet que permiten el control remoto del funcionamiento del sistema de riego por goteo para cada parcela individualmente, optimizando así el uso del sistema de riego de acuerdo a las necesidades del mismo.
- Uniformidad de aplicación.
- Mejoras en la producción y calidad de frutos, debido a que se encuentran mejor satisfechas las necesidades hídricas y nutritivas en todo momento y a lo largo de la temporada. 
- Ahorro de mano de obra.

**Desventajas**

- El sistema de riego por goteo es más caro en la instalación que otros sistemas de riego. Pero realmente a la larga será mucho más económico y sobretodo ecológico.
- Posible taponamiento de los goteros debido a las sales que pueda contener el agua o por la mala calidad del gotero. Para ello recomendamos el uso de sistema de filtrados, algo que supone un aumento del presupuesto.
- No se puede labrar el suelo una vez está instalado el sistema.
- Alto coste de mantenimiento.
- Requiere de mayor preparación técnica por parte del agricultor.
- Necesidad de fertilizantes totalmente solubles en agua.
- Consumo de energía, el costo de la electricidad para el funcionamiento de la instalación y los combustibles es otro factor a tener en cuenta.
- Dependencia de la electricidad.

**Eficiencia en el uso del agua**

El riego en la agricultura tiene varios métodos para realizarse, desde gravedad, aspersión, microaspersión y goteo. Siendo este último el más eficiente en comparativa a los demás métodos ya que es un sistema presurizado de bajo caudal y de alta frecuencia, el cual deposita el agua en las zonas de interés, en este caso las plantas para hacer un uso óptimo del agua.

Este método incrementa el rendimiento de en comparativa con el riego de gravedad, el cual utiliza mucha agua y termina siendo ineficiente ya que termina desperdiciando un 60% del agua utilizada. Mientras que el sistema de goteo tiene una eficiencia del 90% del agua aplicada.

**¿Qué tipos de cultivos se benefician del riego por goteo?**

Prácticamente la mayoría de hortalizas de fruto, de hoja, los tubérculos, las plantas, las flores y los árboles se benefician de este tipo de riego. 

Este método de riego se usa ampliamente en los siguientes cultivos:

- Pimientos
- Bananos
- Fresas
- Algodón
- Caña de azúcar
- Tomates
- Papas
- Naranjas
- Aguacate
- Limón
- Zanahorias
- Almendro
- Olivo
- Melón
- Sandía
- Calabazas
- Calabacines

**¿Por qué regar de noche?**

- Regar las plantas por la noche ayuda a que el agua se filtre mejor en la tierra, ya que la presencia de los rayos directos (o indirectos) del sol, provocan evaporación y por ende, el riego no es tan efectivo.
- Cuando las gotas están cristalizadas sobre las plantas, éstas funcionan como lupas y el rayo directo puede provocar quemaduras leves. Por ello, regar las plantas por las noches ayuda a que la luz no se dirija ni la afecte como tal a las hojas. Esto sirve para limpiar cada hoja o pétalo sin que se quemen.
- Las plantas procesan mejor los beneficios del agua.
- Al ser brotes relativamente rápidos requieren abundante agua y sol. Por lo que al regarlas por la noche les ayudará a adquirir los beneficios del agua, y durante el día, todo lo que el sol ofrece.
- El riego nocturno no llega a interferir con el abono, en el día se puede colocar un poco de abono y la planta lo absorbe, pero si los nutrientes no son precisamente los que tomó la planta, podrías ayudar disolviendo con un poquito de agua del riego nocturno, así pueden cumplir su objetivo sin dañar la planta.


