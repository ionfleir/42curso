Nombre de la tarea: ft_strpbrk
Archivos esperados: ft_strpbrk.c
Funciones permitidas: Ninguna

Reproduce exactamente el comportamiento de la función strpbrk (consulta man strpbrk).

La función debe tener el siguiente prototipo:

char	*ft_strpbrk(const char *s1, const char *s2);


La función strpbrk en C busca en la cadena s1 el primer carácter que también esté presente en la cadena s2.

Descripción:

Recorre s1 y verifica si cada carácter está en s2.
Si encuentra un carácter coincidente, devuelve un puntero a esa posición en s1.
Si no hay coincidencias, devuelve NULL.

