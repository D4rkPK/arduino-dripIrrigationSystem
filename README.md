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

#
**1.**** Metodología seleccionada**

Para cumplir con los requerimientos del proyecto, se seleccionará el modelo incremental.

**¿En qué consiste el modelo incremental?**

El modelo incremental aplica secuencias lineales de manera escalonada conforme avanza el tiempo en el calendario. Cada secuencia lineal produce &quot;incrementos&quot; del proyecto.

Permite entregar al cliente un producto más rápido en comparación del modelo de cascada.

Permite construir el proyecto en etapas incrementales en donde cada etapa agrega una funcionalidad.

![](https://github.com/Brandonp22/sistema-riego-goteo-arduino/blob/main/imagenes/modelo%20incremental.jpg)

**¿Por qué se eligió el método incremental?**

Porque se puede planear en base a la funcionalidad que se quiere entregar primero, y el proyecto cuenta con una estructura en fases bien definidas en la funcionalidad de cada una de ellas, el proyecto puede descomponerse en una serie de incrementos, y cada uno suministra una porción de la funcionalidad respecto de la totalidad de los requisitos del proyecto, tomando en cuenta también el tiempo del que se dispone para la finalización del proyecto

**¿De cuántas fases constará el proyecto?**

Este está dividido en 3 fases, con duración de una semana cada una, donde la primera de ellas se utilizará para adquirir los elementos necesarios con los cuales se llevará a cabo el proyecto e investigación y retroalimentación acerca de las tecnologías que serán utilizadas.

Por ello, las fases del modelo incremental para la primera semana del proyecto ( **comunicación, planeación, modelado, construcción, despliegue** ) estarán enfocadas en procesos investigativos y de adquisición de productos necesarios, como de la entrega de la documentación respectiva sobre el inicio del proceso y no del desarrollo del proyecto como tal, ya que este inicia en la segunda fase incremental.

Se hace esta adaptación ya que los procesos que se llevarán a cabo en la primera semana, se pueden acoplar a las fases del modelo incremental sin ningún problema, aunque estos no se refieran al desarrollo de software como tal.

**Fases del proyecto**

- **Primera fase incremental: Fase previa (Duración 1 semana)**

- **Segunda fase incremental: Fase desarrollo 1 (Duración 1 semana)**

- **Tercera fase incremental: Fase desarrollo 2 y entrega final (Duración 1 semana)**

**2.**** Análisis, desarrollo y planeación del proyecto**

**Primera fase incremental: Fase previa (8 de mayo – 15 de mayo)**

**Comunicación (Duración: 2 días)**

**8 de mayo**

- El grupo de trabajo piensa acerca de la idea de un proyecto que pueda ser funcional y cumpla con los requisitos para ser aceptado.

**Desarrollo de documentación para llevar a cabo el planteamiento**

- El equipo de trabajo lleva a cabo una investigación acerca de los elementos que debe de poseer un sistema de riego por goteo, y elabora un documento explicando las funcionalidades que el mismo pueda poseer.

**10 de mayo**

**Planteamiento del proyecto**

Se lleva a cabo el planteamiento del proyecto para poder llegar a un acuerdo si este será aceptado o no, o cambios que se podrían efectuar en el mismo, con el fin de dar inicio posteriormente a las demás fases del proyecto.

**Planeación (Duración: 2 días)**

**9 de mayo**

- Se lleva a cabo una retroalimentación vía internet acerca de cómo funcionan los componentes necesarios para el proyecto, como es el medidor de humedad de tierra, el medidor de humedad del aire, etc.

**11 de mayo**

- Se lleva a cabo una cotización de los elementos necesarios para llevar a cabo el proyecto, y ya que es un proyecto que se ejecutará en un grupo de 3 integrantes, sacar un promedio del aporte económico a realizar de cada uno, por lo que es necesario indagar en diferentes sitios web, para ver cual es el que nos ofrece mejores productos y con un precio que no sea elevado.

**Modelado (Duración: 2 días)**

En esta etapa se efectúa el análisis y diseño de lo que se entregará del proyecto en los próximos dos entregables donde se muestran los avances más notables del mismo.

**12 de mayo**

- Llegar a un acuerdo acerca de lo que será entregado en las siguientes dos fases incrementales para poder planear de una mejor manera los procesos en los incrementos siguientes.

**13 de mayo**

- Diseño del diagrama electrónico (circuito) en el software fritzing.0.9.3b.32.pc con todos los componentes del sistema de riego por goteo.

**Construcción (Duración: 1 día)**

**14 de mayo**

- Construcción del documento de plan de trabajo para el proyecto final, consistente en un sistema de riego por goteo, con su respectivo calendario acerca de las fechas correspondientes, y qué procesos se llevarán a cabo en cada día.

- Hacer el pedido a primera hora del día de los componentes del sistema.

**Despliegue (Duración: 1 día)**

**15 de mayo**

- Entregar el plan de trabajo del proyecto, y el diagrama electrónico del sistema de riego por goteo.

**Segunda fase incremental: Fase desarrollo 1 (16 de mayo – 22 de mayo)**

**Comunicación (Duración: 1 día)**

**16 de mayo**

- Tener una plática entre los integrantes del grupo acerca de cambios que puedan efectuarse en el proyecto, y acerca de los avances que se presentarán en el despliegue de esta fase.

**Planeación (Duración: 1 día)**

**17 de mayo**

- Planear qué se trabajará en las siguientes fases, asignando una tarea a cada integrante del grupo, con el fin de cumplir a cabalidad con lo estipulado para el despliegue de la segunda fase incremental.

**Modelado (Duración: 1 día)**

**18 de mayo**

- En esta fase que es de análisis y diseño, se trazarán las metas para la fase de construcción, y también se pulirá lo visto en la etapa de planeación, para dejar el modelo del plan de trabajo y qué es lo que se va a entregar realmente en el despliegue de esta fase.

- Diseño de diagramas de casos de uso.

**Construcción (Duración: 3 días)**

En esta etapa no se trabajará con metas por cada día, ya que al ser un proyecto que se debe finalizar en un tiempo corto, entonces, se avanzará lo más que se pueda en los días según las metas trazadas en las etapas anteriores, con el fin de que para el 21 de mayo podamos tener las funcionalidades especificadas para este incremento terminadas.

**Días de construcción: 19, 20, 21 de mayo**

**IMPORTANTE:** Los días 19 y 20, los tres integrantes del grupo trabajaran en lacodificación y desarrollo del proyecto como tal, pero el día 21 un integrante no trabajará en

la construcción, y se dedicará a empezar con la etapa del despliegue, que tendrá una duración de 2 días.

**Despliegue (Duración: 2 días)**

**21 de mayo**

- Un integrante del grupo se encargará de la documentación respectiva a presentar el día 22 de mayo al ingeniero. En estos documentos deben presentarse los avances que se llevaron a cabo, las referencias y demás archivos de ser necesarios (diagramas, código, imágenes, etc.).

**22 de mayo**

- Realizar la entrega y retroalimentación respectiva del segundo incrementable del proyecto, mostrar una demo de cómo funciona el proyecto hasta el momento del despliegue.

**Tercera fase incremental: Fase desarrollo 2 y entrega final (23 de mayo – 29 de mayo)**

**Comunicación (Duración: 1 día)**

**23 de mayo**

- Se afinan detalles para la presentación final, se platica acerca de las funcionalidades restantes para completar el sistema de riego en su totalidad.

**Planeación y Modelado (Duración: 2 días)**

En este caso se llevan a cabo las dos etapas al mismo tiempo ya que para agilizar procesos, se puede ir planeando y modelando las metas trazadas y diseño de las mismas, al mismo tiempo, con el fin de tener un plan para la fase de construcción bien elaborado, al finalizar la planeación de uno de los procesos, podemos analizarlo y diseñarlo, para dejar bien trazado el objetivo.

**24 y 25 de mayo**

- Planear el orden de trabajo y diseñar un plan para llevarlo a cabo y poder cumplir con el plazo.

- Diseñar diagramas que expliquen las funcionalidades.

- Planear la construcción y modelado de un manual de usuario con los pasos a seguir para el funcionamiento correcto del sistema de riego.

**Construcción (Duración: 3 días)**

- Se ejecuta lo planeado en las anteriores fases, según el orden estipulado durante las fechas **26, 27 y 28 de mayo**

**IMPORTANTE:** Los días 26 y 27, los tres integrantes del grupo trabajaran en lacodificación y desarrollo del proyecto como tal, pero el día 28 un integrante no trabajará en la construcción, y se dedicará a empezar con la etapa del despliegue, que tendrá una duración de 2 días.

**Despliegue (Duración: 2 días)**

**28 de mayo**

- Un integrante del grupo se encargará de la documentación respectiva a presentar el día 28 de mayo al ingeniero. En estos documentos deben presentarse los avances que se llevaron a cabo, las referencias y demás archivos de ser necesarios (diagramas, código, imágenes, etc.).

**29 de mayo**

- Entrega final al ingeniero Estuardo Villatoro del proyecto sistema de riego por goteo, con la documentación y archivos respectivos.

- Entrega de manual de usuario, para poder mantener el funcionamiento correcto del sistema.

#


[Propuesta de trabajo](https://github.com/Brandonp22/sistema-riego-goteo-arduino/releases/download/v1.0/Propuesta.pdf)

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

#
**Diagramas correspondientes al proyecto**

**Diagrama de casos de uso del usuario**

![](https://github.com/Brandonp22/sistema-riego-goteo-arduino/releases/download/v2.0/casos_de_uso_usuario.png)

**Diagrama de casos de uso de los sensores**

![](https://github.com/Brandonp22/sistema-riego-goteo-arduino/releases/download/v2.0/Casos_de_uso_sensores.png)

**Diagrama de flujo del sistema de riego por goteo**

![](https://github.com/Brandonp22/sistema-riego-goteo-arduino/releases/download/v2.0/Diagrama_de_flujo.png)

 **Video de prototipo**

<https://drive.google.com/file/d/1l9tVErn09lDyYzyEWCE4eyw0yJ-qHcoe/view?usp=sharing>
