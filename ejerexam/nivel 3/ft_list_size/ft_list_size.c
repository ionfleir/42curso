#include "ft_list_size.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int	cont = 0;

	while (begin_list != NULL)
	{
		cont++;
		begin_list = begin_list->next;
	}
	return (cont);
}

t_list *create_node(void *data)
{
	t_list	*new_node;

	new_node =(t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

int	main(void)
{
	t_list *nodo1 = create_node("Hola");
	t_list *nodo2 = create_node("mundo");
	t_list *nodo3 = create_node("!");

	// Enlazamos los nodos
	nodo1->next = nodo2;
	nodo2->next = nodo3;

	// Probamos la función
	int total = ft_list_size(nodo1);
	printf("La lista tiene %d nodos.\n", total);

	// Liberamos memoria
	free(nodo1);
	free(nodo2);
	free(nodo3);

	return 0;
}