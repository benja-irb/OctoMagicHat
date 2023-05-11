# OctoMagicHat
<div style="text-align: justify">
This is a mechatronic-costume project developed &amp; constructed by myself for the course ME4250 Mechatronics, taught by by Carolina Silva And Leslie Cárdenas at the University of Chile . It is a magic hat that hides a small 3D-printed octopus. Using servo motors, the hat performs a small interaction with the octopus through an open-loop control system developed for the Arduino platform.
</div>

## El proyecto...

<p align="center">
<img src=Pics/OctoMagicHat.jpeg alt="Texto alternativo" width="25%" height="25%">
</p>


<div style="text-align: justify">
Este diseño es un disfrás animatrónico inspirado en un sombrero de magia. Dentro del sombrero, permanece oculto una figura, en ete caso un pequeño pulpo, el cual sale desde el sombrero al presionar un botón oculto en la solapa y realiza una pequeña interacción.
  
</div>

<p align="center">
  <img src=Pics/gif_hat.gif alt="Texto alternativo" width="300">
</p>

### Materiales y componentes

Materiales para el sombrero:
- Cartón corrugado.
- Policarbonato alveolar.
- Cinta de union.
- Barras de silicona.
- Cintas de Velcro.
- Par de imanes de neodimio pequeños.

Componentes:
- Placa Arduino NANO.
- Shield servomotores para Arduino NANO.
- 2 Micro Servomotores.
- Buzzer Activo.
- Pulsador.
- Batería externa de 5V.
- Cables para conexiones.
- Pernos Parker M4 x 8mm
- Herramienta de hilo M4

### Diseño del esquema de conexiones


<div style="text-align: justify">
  Para el diseño y simulación del circuito usé la plataforma Tinkercad (https://www.tinkercad.com/things/hFBynJSA9Hm-proyecto1mecatronica), aquí e esquema de conexiones:
  
</div>

<p align="center">
  <img src=Pics/electric_diagram.png alt="Texto alternativo" width="500">
</p>

En cuanto al código utilizado, se encuentra en los archivos del repositorio.

### Diseño del Mecanismo

La idea detrás del mecanismo es justamente que la figura oculta pueda salir de una forma natural hacia fuera del sombrero, al mismo tiempo que fuese compacto para estar dentro del sombrero. Los elementos del mecanismo están en la carpeta "STL" para ser impresos en 3D. El número de componentes a imprimir es el siguiente:

<p align="center">
  <img src=Pics/interaction_mechanism.png alt="Texto alternativo" width="400">
</p>


- x1 base_support.stl
- x1 main_link.stl
- x2 main_link_bushing.stl
- x1 platform.stl
- x2 secondary_link.stl
- x1 servo_mount.stl

Parametros de impresión:
- Material PLA + (extrusor: 200°C y cama: 60°C pero estos varían según el material del filamento).
- Altura de Capa: 0,2 mm.
- Software de segmentación: CURA.

Estos compoentes se unen mediante pernos parker M4 x 8mm. Requere usar una herramienta de hilo M4.

Como observación, no considero la figura que está oculta dentro del sombrero ya que queda a libre elección de quien quiera replicar este proyecto.

### Estructura auxiliar

Utilizando una base de policarbonato auxiliar, pude organizar todos los componentes electronicos y el mecanismo, esta base irá luego dentro del sombrero, por lo que se recomienda considerar las dimenciones del sombrero para que este calze de buena manera al utilizarlo.

<p align="center">
  <img src=Pics/electronics_bay.jpeg alt="Texto alternativo" width="400">
</p>

Es importante mencionar que desde esta base salen las conexiones del pulsador/botón que estará oculto en la solapa del sombrero que se mostrará más adelante.

### Estructura del sombrero

La estructura "cilindrica" fue construida en cartón corrugado, mientras que la solapa, la tapa se usaron dos cortes de policarbonato alveolar. A continuación, algunas imagenes del proceso en donde muestra tambíen como va conectado el pulsador al cual le fue soldado los cables de alimentación y de datos, además de una resitencia tal y como se ve en el esquema de conexiones.

<p align="center">
  <img src=Pics/hat_structure.jpeg alt="Imagen 1" height="300">
  <img src=Pics/hide_button.jpeg alt="Imagen 2" height="300">
</p>

Finalmente, el sombrero fue cubierto con tela de felpa y se le agregó un contorno interno de policarbonato para hacer soporte de la estructura auxiliar de componentes.

<p align="center">
  <img src=Pics/hat.jpeg alt="Texto alternativo" width="400">
</p>

### Montaje

El montaje consiste en introducir la estructura auxiliar al sombrero, realizar las conexiones con el pulsador y colocar una tapa también cubierta en felpa y con unas cintas de velcro pegadas. Notar que la tapa tiene unos cortes que le permiten flectar por secciones.

<p align="center">
  <img src=Pics/inside.jpeg alt="Imagen 1" height="300">
  <img src=Pics/button_conetions.jpeg alt="Imagen 2" height="300">
  <img src=Pics/velco.jpeg alt="Imagen 3" height="300">
</p>

También agregué 2 imanes, uno en la punta de la tapa y otro escondido en el sombrero, de esta forma la tapa permanece cerrada mientas la figura esté oculta dentro del sombrero.


### Listo

Este fue mi proyecto de disfraz animatrónico con control de lazo abierto. Gracias por leer y llegar hasta aquí!

<p align="center">
  <img src=Pics/hat1.jpeg alt="Texto alternativo" width="500">
</p>





