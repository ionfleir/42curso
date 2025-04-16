/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:05:38 by aburga-g          #+#    #+#             */
/*   Updated: 2025/04/16 11:40:32 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/**
 * @brief funcion para liberar memoria de cada nodo 
 * 
 * @param node doble puntero al nodo que se va liberar.
 */
void	free_stack(t_stack **node)
{
	t_stack	*temp;
	if (!node || !*node)
		return ;
	while (*node)
	{
		temp = (*node) -> next;
		free(*node);
		*node = temp;
	}
}

void	free_split(char **split)
{
	int i;
	
	i = 0;
	if (!split)
		return;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split); // Libera el array de punteros
}
