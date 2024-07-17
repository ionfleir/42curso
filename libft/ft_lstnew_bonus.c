/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:31:09 by aburga-g          #+#    #+#             */
/*   Updated: 2024/05/28 15:16:22 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief crea un nuevo nodo para una lista enlazada
 * 
 * @param content el argumento es un puntero a "void", lo que permite 
 * que el contenido del nodo pueda ser de cualquier tipo. 
 * @return t_list* un puntero al elemento de lista recien creado(nodo).
 * Si falla la asignacion de memoria devuelve NULL.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*int	main(void)
{
	t_list *node1 = ft_lstnwe("hello");
	t_list *node2 = ft_lstnew("worls");
	t_list *node3 = ft_lstnew("!");

	node1->next = node2;
	node2->next = node3;
	printf_list(node1);
	free(node1);
	
}*/