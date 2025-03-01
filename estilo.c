:root {
  --Este-azul: #2596BE;
  --este-azul-oscuro: #15556C;
  --blanco: #f2f2f2;
}

* {
  font-family: 'Roboto', sans-serif;
  tamaño de caja: border-box;
  
}

/* Estilos para titulos*/

h2 {
  Tamaño de fuente: 2em;
  alineación de texto: centro;
}

h3 {
  Tamaño de fuente: 1.5em;
}

/* Estilos para párrafos */

p {
  color: negro;
  Tamaño de fuente: 1.2em;
  alineación de texto: centro;
}

/* Estilos para el cuerpo del documento */

cuerpo {
  font-weight: negrita;
  margen: 0;
  relleno: 0;
  Ancho: 100%;
  Altura mínima: 100VH;
  background-color: var(--blanco);
}

/* Estilos para encabezado */

encabezado {
  Ancho: 100%;
  posición: fija;
  Color: Var(--blanco);
  Pantalla: cuadrícula;
  grid-template-columns: 1fr auto;
  align-items: centro;
  justificar-contenido: espacio-entre;
  relleno: 15px;
  background-image: url("data:image/svg+xml,%3csvg xmlns='http://www.www.http://www.w3.org/2000/svg' version='1.1' xmlns:xlink='http://www.w3.org/1999/xlink' xmlns:svgjs='http://svgjs.com/svgjs' width='1440' height='560' preserveAspectRatio='none' viewBox='0 0 1440 560'%3e%3cg mask='url(%26quot%3b%23SvgjsMask1002%26quot%3b)' fill='none'%3e%3crect width='1440' height='560' x='0' y='0' fill='url(%23SvgjsLinearGradient1003)'%3e%3c/rect%3e%3cpath d= 'M1440 0L764.1 0L1440 155.98z' fill='rgba(255%2c 255%2c 255%2c .1)'%3e%3c/path%3e%3cpath d='M764.1 0L1440 155.98L1440 348.54999999999995L736..78 0z' fill='rgba(255%2c 255%2c 255%2c .075)'%3e%3c/path%3e%3cpath d='M736.78 0L1440 348.54999999999995L1440 382.78L718.17 0z' fill='rgba(255%2c 255%2c 255%2c .05)'%3e%3c/path%3e%3cpath d='M718.17 0L1440 382.78L1440 451.15999999999997L614.18 0z' fill='rgba(255%2c 255%2c 255%2c .025)'%3e%3c/ path%3e%3cpath d='M0 560L695.15 560L0 300.06z' fill='rgba(0%2c 0%2c 0%2c .1)'%3e%3c/path%3e%3cpath d='M0 300.06L695.15 560L728.0699999999999 560L0 194.94z' fill='rgba(0%2c 0%2c 0%2c .075)'%3e%3c/path%3e%3cpath d='M0 194.94L728.0699999999999 560L920.5999999999999 560L0 147.05z' fill='rgba(0%2c 0%2c 0%2c .05)'%3e%3c/path%3e%3cpath d='M0 147.05L920.5999999999999 560L1254.27 560L0 97.28z' fill='rgba(0%2c 0%2c 0% 2c .025)'%3e%3c/path%3e%3c/g%3e%3cdefs%3e%3cmask id='SvgjsMask1002'%3e%3crect width='1440' height='560' fill='white'%3e%3c/rect%3e%3c/mask%3e%3clinearGradient x1='15..28%25' y1='-39.29%25' x2='84.72%25' y2='139.29%25' gradientUnits='userSpaceOnUse' id='SvgjsLinearGradient1003'%3e%3cstop stop-color='%230e2a47' offset='0'%3e%3c/stop%3e%3cstop stop-color='%2300459e' offset='1'%3e%3c/stop%3e%3c/linearGradient%3e%3c/defs%3e%3c/svg%3e");
  tamaño de fondo: cubierta;
}

Encabezado H1 {
  Tamaño de fuente: 1.5em;
  margen: 0;
}

/* Estilos para la barra de navegación */

Nav {
  relleno: 0 px 20px;
}

. lista-nav {
  Pantalla: Flex;
}

. lista-nav a {
  Color: #FFF;
  decoración de texto: ninguno;
  Tamaño de fuente: 1em;
  relleno: 5px;
}

/* Estilos para secciones */

sección {
  relleno: 20px;
}

/* Estilos para presentacion */

#Presentación {
  relleno: 90px;
  Pantalla: cuadrícula;
  grid-template-columns: 1 fr 1 fr;
  grid-template-rows: 7.5 em 10.5 em 10.5  em;
  justificar-contenido: espacio-alrededor;
  align-items: centro;
  justificar-ítems: centro;
}

. presentacion__titulo {
  grid-column-start: 1;
  grid-column-end: 3;
  Tamaño de fuente: 2.5em;
  alineación de texto: centro;
}

. presentacion__texto-1,
. presentacion__texto-2 {
  Ancho: 80%;
  margen: 40 px 0px;
  Tamaño de fuente: 1.4em;
  alineación de texto: heredar;
}

. presentacion__texto-2 {
  grid-row-start: 3;
  grid-row-end: 4;
  grid-column-start: 2;
}

. presentacion-personal-nombres {
  Pantalla: cuadrícula;
  grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
  alineación de texto: centro;
  Espacio: 30px;
  margen: 0 px 50px;
}

. tarjeta {
  margen: 20 px 0px;
  relleno: 15px;
  Tamaño de fuente: 1em;
  Color: Var(--blanco);
  background-color: var(--eastern-blue-oscuro);
  font-weight: negrita;
  Radio de borde: 10px;
}

. texto-presentacion {
  Tamaño de fuente: 1em;
  Color: Var(--blanco);
}

/* Estilos para formulario */

#form-contacto {
  Pantalla: cuadrícula;
  justificar-ítems: centro;
  margen: 50 px 0px;
}

#form-proceso {
  Pantalla: Flex;
  justificar-contenido: centro;
  Margin-top: 50px;
}

Etiqueta de formulario  {
  Pantalla: bloque;
  Margen inferior: 10px;
  Tamaño de fuente: 1.2em;
  font-weight: negrita;
}

form input[type="text"],
entrada de formulario[type="email"],
form input[type="tel"],
form input[type="number"],
selección de formulario,
Área de texto del formulario {
  Ancho: 60%;
  relleno: 10px;
  Radio de borde: 5px;
  Borde: 1px sólido #CCC;
  Margen inferior: 20px;
  Tamaño de fuente: 1.2em;
}

. mensaje {
  Altura: 80px;
}

Área de texto del formulario {
  cambiar tamaño: vertical;
}

botón de formulario[type="enviar"],
botón de formulario[type="button"] {
  Ancho: 25%;
  relleno: 10 px 20px;
  borde: ninguno;
  Radio de borde: 5px;
  background-color: var(--eastern-blue-oscuro);
  Color: #FFF;
  cursor: puntero;
  Margen: 10 px 10 px 10 px 0  px;
  Tamaño de fuente: 1.2em;
}

botón de formulario[type="submit"]:hover,
form button[type="button"]:hover {
  color de fondo: #444;
}

botón formulario[type="enviar"]:foco,
botón de formulario[type="botón"]:foco {
  esquema: ninguno;
}

Botón de formulario. Prev {
  Pantalla: ninguna;
}

. anterior-btn, . Next-BTN {
  Pantalla: bloque en línea;
  Margen derecho: 10px;
}

conjunto de campos {
  transición: opacidad 0.5s ease-out;
  Ancho: 70%;
  Pantalla: cuadrícula;
  grid-template-columns: 1fr;
  Espacio: 20px;
}

#cantidad {
  Ancho: 15%;
  Radio de borde: 5px;
  Borde: 1px sólido #CCC;
  Margen inferior: 20px;
}

#comentarios {
  Ancho: 100%;
}

/* Estilos para pie de página */

pie de página {
  background-color: var(--eastern-blue-oscuro);
  Color: #FFF;
  alineación de texto: centro;
  Margin-top: 30px;
  relleno: 10px;
}

. texto-footer {
  Color: #FFF;
}