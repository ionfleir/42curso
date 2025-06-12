/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:05:38 by aburga-g          #+#    #+#             */
/*   Updated: 2025/06/12 10:49:19 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/**
 * @brief libera completamete memoria de cada lista enlazada de tipo stack.
 * 
 * Esta funcion recorre la lista enlazada lapuntado por 'node' y libera 
 * cara nodo uno por uno. Al finalizar, el puntero original apunta NULL;
 * 
 * @param node doble puntero al nodo que se va liberar.
 */
void	free_stack(t_stack **node)
{
	t_stack	*temp;

	if (!*node || !node)
		return ;
	while (*node)
	{
		temp = (*node)->next;
		free(*node);
		*node = temp;
	}
}

/**
 * @brief funcion free_split para liberar memoria reservado por un array
 * de string.
 * Esta función libera cada string contenido en el array, y luego
 * libera el propio array de punteros. Es útil para limpiar memoria
 * reservada por funciones como ft_split.
 * @param split doble puntero a char representa un array terminado en NULL
 */
void	free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);// libera el array de punteros.
}

