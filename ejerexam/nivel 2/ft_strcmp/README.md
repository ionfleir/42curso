Nombre del ejercicio: ft_strcmp
Archivos esperados: ft_strcmp.c
Funciones permitidas:

Reproduce el comportamiento de la función strcmp (consulta man strcmp).

Tu función debe ser declarada de la siguiente manera:

int ft_strcmp(char *s1, char *s2);

La función strcmp en C se utiliza para comparar dos cadenas de caracteres (strings) y determinar su orden lexicográfico (alfabético) o si son iguales. Es parte de la biblioteca estándar <string.h>.

Funcionamiento:
Compara los caracteres de las cadenas s1 y s2 uno por uno, hasta que encuentra una diferencia o llega al final de alguna de las cadenas.
Devuelve:
Un valor negativo si s1 es menor que s2.
Cero (0) si s1 y s2 son iguales.
Un valor positivo si s1 es mayor que s2.

Criterios de comparación:
La comparación se realiza usando los valores ASCII de los caracteres.
Por ejemplo:
'a' (ASCII 97) es menor que 'b' (ASCII 98).
'A' (ASCII 65) es menor que 'a' (ASCII 97).
