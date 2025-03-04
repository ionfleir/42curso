Nombre de la tarea: rstr_capitalizer
Archivos esperados: rstr_capitalizer.c
Funciones permitidas: write

Escribe un programa que tome una o más cadenas de texto y, para cada argumento, convierta en mayúscula la última letra de cada palabra que sea una letra y el resto en minúscula. Luego, muestra el resultado seguido de un salto de línea (\n).

Una palabra es una sección de la cadena delimitada por espacios/tabulaciones o por el inicio/final de la cadena.
Si una palabra tiene una sola letra, esta debe estar en mayúscula.
Una letra es cualquier carácter del conjunto [a-zA-Z].
Si no hay parámetros, el programa debe mostrar solo un salto de línea (\n).

Ejemplos:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$