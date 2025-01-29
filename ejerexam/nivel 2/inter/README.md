Nombre del ejercicio: inter
Archivos esperados: inter.c
Funciones permitidas: write

Escribe un programa que reciba como parámetros dos cadenas de caracteres y que muestre, sin duplicados, los caracteres comunes a ambas cadenas.

Los caracteres comunes se deben mostrar en el orden en que aparecen dentro de la primera cadena.
La salida debe terminar con un salto de línea.

Si el número de parámetros proporcionados es distinto de 2, el programa debe mostrar un salto de línea (\n).

Ejemplos:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "algo" "no crea que esta frase esconde algo" | cat -e
algo$
$>./inter | cat -e
$
