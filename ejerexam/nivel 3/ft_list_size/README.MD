Nombre del ejercicio: ft_list_size
Archivos esperados: ft_list_size.c
Funciones permitidas:

Escribe una función que devuelva el número de elementos en la lista enlazada que se le pasa como argumento.

Debe ser declarada de la siguiente forma:

int	ft_list_size(t_list *begin_list);
Debes usar la siguiente estructura en tu programa ft_list_size.c:

typedef struct	s_list
{
	struct s_list	*next;  // Puntero al siguiente nodo
	void			*data;  // Puntero a los datos del nodo
}				t_list;