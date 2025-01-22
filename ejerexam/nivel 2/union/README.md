Nombre de la tarea: union
Archivos esperados: union.c
Funciones permitidas: write

Escribe un programa que tome dos cadenas y muestre, sin duplicados, los caracteres que aparecen en cualquiera de las dos cadenas.

La salida debe seguir el orden en el que los caracteres aparecen en la línea de comandos y debe terminar con un salto de línea (\n).

Si el número de argumentos no es 2, el programa debe mostrar solo un salto de línea (\n).

Ejemplo:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
