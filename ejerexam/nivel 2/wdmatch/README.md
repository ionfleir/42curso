Nombre de la tarea: wdmatch
Archivos esperados: wdmatch.c
Funciones permitidas: write

Escribe un programa que tome dos cadenas y verifique si es posible escribir la primera cadena utilizando caracteres de la segunda, respetando el orden en el que aparecen en la segunda cadena.

Si es posible, el programa muestra la primera cadena seguida de un salto de línea (\n), de lo contrario, solo muestra un salto de línea.

Si el número de argumentos no es 2, el programa también muestra solo un salto de línea.

Ejemplos:

$> ./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$> ./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$> ./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$> ./wdmatch "error" "rrerrrfiiljdfxjyuifrrvcoojh" | cat -e
$
$> ./wdmatch | cat -e