/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:17:50 by aburga-g          #+#    #+#             */
/*   Updated: 2025/03/13 17:44:15 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack_node	*ft_stack_new(void *date)
{
	t_stack_node	*new;

	new = (t_stack_node *)malloc(sizeof(t_stack_node));
	if (!new)
		return (NULL);
	new->nbr = date;
	new->next = NULL;
	return (new);
}
