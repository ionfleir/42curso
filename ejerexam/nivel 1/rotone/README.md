Nombre del ejercicio: rotone
Archivos esperados: rotone.c
Funciones permitidas: write

Escribe un programa que tome una cadena y la muestre, reemplazando cada una de sus letras por la siguiente en el orden alfabético.

'z' se convierte en 'a' y 'Z' se convierte en 'A'.
La distinción entre mayúsculas y minúsculas se mantiene.
La salida debe estar seguida de un salto de línea (\n).
Si el número de argumentos no es 1, el programa debe mostrar solo un salto de línea.

Ejemplo:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
