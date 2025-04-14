/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:05:38 by aburga-g          #+#    #+#             */
/*   Updated: 2025/04/14 12:23:21 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_free(t_stack **node)
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