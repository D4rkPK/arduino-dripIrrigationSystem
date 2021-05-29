
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

![](https://github.com/Brandonp22/sistema-riego-goteo-arduino/releases/download/v1.0/Circuito.electronico.png)















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


