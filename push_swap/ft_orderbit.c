/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orderbit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:09:22 by aburga-g          #+#    #+#             */
/*   Updated: 2025/06/10 19:09:22 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	ft_assign_index(t_stack *stack)
{
	t_stack *i;
	t_stack *j;
	int index;

	i = stack;
	while (i)
	{
		index = 0;
		j = stack;
		while (j)
		{
			if (j->value < i->value)
				index++;
			j = j->next;
		}
		i->index = index;
		i = i->next;
	}
}

/**
 * @brief  
 * 
 * @param a 
 */
void	ft_sortmax(t_stack **a)
{
	t_stack	*b = NULL;
	int		i = 0;
	int		j;
	int		size = ft_stack_size(*a);
	int		max_bits = 0;

	// Encuentra cuántos bits se necesitan para representar el mayor índice
	while ((size - 1) >> max_bits)
		max_bits++;

	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->index >> i) & 1) == 0)
				ft_pb(a, &b, 1); // bit 0 => lo mandamos a B
			else
				ft_ra(a, 1); // bit 1 => lo rotamos
			j++;
		}
		while (b)
			ft_pa(a, &b, 1); // devolvemos todos a A
		i++;
	}
}