Nombre del ejercicio: repeat_alpha
Archivos esperados: repeat_alpha.c
Funciones permitidas: write

Escribe un programa llamado repeat_alpha que tome una cadena y la muestre
repitiendo cada carácter alfabético tantas veces como su índice alfabético,
seguido de un salto de línea.

'a' se convierte en 'a', 'b' se convierte en 'bb', 'e' se convierte en 'eeeee', etc.
La distinción entre mayúsculas y minúsculas se mantiene.
Si el número de argumentos no es 1, simplemente muestra un salto de línea.

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
