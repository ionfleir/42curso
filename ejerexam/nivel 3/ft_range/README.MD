Nombre del ejercicio: ft_range
Archivos esperados: ft_range.c
Funciones permitidas: malloc

Escribe la siguiente función:

int	*ft_range(int start, int end);

Debe reservar (con malloc()) un array de enteros, rellenarlo con valores consecutivos que comiencen en start y terminen en end (¡incluyendo start y end!), luego devolver un puntero al primer valor del array.

Ejemplos:

Con (1, 3) devolverás un array que contiene: 1, 2 y 3.

Con (-1, 2) devolverás un array que contiene: -1, 0, 1 y 2.

Con (0, 0) devolverás un array que contiene: 0.

Con (0, -3) devolverás un array que contiene: 0, -1, -2 y -3.