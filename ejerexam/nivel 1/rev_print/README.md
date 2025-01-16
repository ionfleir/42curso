
Nombre del ejercicio: rev_print
Archivos esperados: rev_print.c
Funciones permitidas: write

Escribe una función que tome una cadena y la muestre en orden inverso, seguida de un salto de línea.

La cadena original no debe modificarse.
Debes devolver la cadena pasada como parámetro.
Tu función debe ser declarada de la siguiente manera:

char *rev_print(char *str);

Ejemplo:
int main(void)
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
}

Salida estandar:

$> ./a.out | cat -e
dlrow olleH$
$> ./a.out | cat -e
Reverse print$
$> ./a.out | cat -e
$
