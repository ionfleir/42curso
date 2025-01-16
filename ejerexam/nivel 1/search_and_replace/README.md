Nombre del ejercicio: search_and_replace
Archivos esperados: search_and_replace.c
Funciones permitidas: write, exit

Escribe un programa llamado search_and_replace que tome 3 argumentos:

El primer argumento es una cadena en la que se reemplazará un carácter.
El segundo argumento es la letra que se busca en la cadena.
El tercer argumento es la letra por la que se reemplazará.

Reglas:

Si el número de argumentos no es exactamente 3, el programa muestra un salto de línea.
Si el segundo argumento no está contenido en el primero, el programa simplemente reescribe la cadena seguida de un salto de línea.

Ejemplos:

$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
