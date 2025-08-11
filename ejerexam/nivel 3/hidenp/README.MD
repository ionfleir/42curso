Nombre del ejercicio: hidenp
Archivos esperados: hidenp.c
Funciones permitidas: write

Escribe un programa llamado hidenp que tome dos strings y muestre 1
seguido de un salto de línea si el primer string está "oculto" dentro del segundo,
de lo contrario mostrará 0 seguido de un salto de línea.

Sean s1 y s2 dos strings. Decimos que s1 está oculto en s2 si es posible
encontrar cada carácter de s1 dentro de s2, en el mismo orden en que aparecen en s1.
Además, el string vacío se considera oculto en cualquier string.

Si el número de parámetros no es 2, el programa debe mostrar solo un salto de línea.

Ejemplos:

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e  
1$  
$>./hidenp "abc" "2altrb53c.sse" | cat -e  
1$  
$>./hidenp "abc" "btarc" | cat -e  
0$  
$>./hidenp | cat -e  
$