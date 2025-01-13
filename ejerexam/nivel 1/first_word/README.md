Nombre de la tarea: primera_palabra
Archivos esperados: primera_palabra.c
Funciones permitidas: write

Escribe un programa que tome una cadena y muestre su primera palabra, seguida de un salto de línea.

Una palabra es una sección de la cadena delimitada por espacios/tabs o por el inicio/fin de la cadena.

Si el número de parámetros no es 1, o si no hay palabras, simplemente muestra un salto de línea.

Ejemplos:

$> ./primera_palabra "PARA CABALLO" | cat -e
PARA$
$> ./primera_palabra "esto        ...    es Esparta, luego, tal vez    no" | cat -e
esto$
$> ./primera_palabra "   " | cat -e
$
$> ./primera_palabra "a" "b" | cat -e
$
$> ./primera_palabra "  lorem,ipsum  " | cat -e
lorem,ipsum$


