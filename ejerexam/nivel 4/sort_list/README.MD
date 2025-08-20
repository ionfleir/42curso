Assignment name : sort_list
Expected files : sort_list.c
Allowed functions:

Escribe la(s) siguiente(s) función(es):

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));


Esta función debe ordenar la lista dada como parámetro, utilizando el puntero a función cmp para seleccionar el orden a aplicar, y devolver un puntero al primer elemento de la lista ordenada.

Los duplicados deben permanecer.

Las entradas siempre serán coherentes.

Debes usar el tipo t_list descrito en el archivo list.h que se te proporciona. Debes incluir ese archivo (#include "list.h"), pero no debes entregarlo. Usaremos el nuestro para compilar tu ejercicio.

Las funciones pasadas como cmp siempre devolverán un valor diferente de 0 si a y b están en el orden correcto, 0 en caso contrario.

Por ejemplo, la siguiente función usada como cmp ordenará la lista en orden ascendente:

int ascending(int a, int b)
{
	return (a <= b);
}