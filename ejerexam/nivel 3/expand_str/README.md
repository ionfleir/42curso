Assignment name : expand_str
Expected files : expand_str.c
Allowed functions: write

Escribe un programa que tome una cadena y la muestre con exactamente tres espacios
entre cada palabra, sin espacios ni tabulaciones al principio o al final,
seguido de un salto de línea.

Una palabra es una sección de la cadena delimitada ya sea por espacios/tabulaciones, o por el
inicio/final de la cadena.

Si el número de parámetros no es 1, o si no hay palabras, simplemente muestra
un salto de línea.

Examples:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
$
$>

$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$>