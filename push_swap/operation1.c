/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 19:08:51 by aburga-g          #+#    #+#             */
/*   Updated: 2025/03/19 12:49:43 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sa(t_stack **a, int j)
{
	t_stack	*aux;

	if (*a && (*a)->next)
	{
		aux = *a;
		*a = (*a)->next;
		aux->next = (*a)->next;
		(*a)->next = aux;
	}
	if (j == 0)
		write (1, "sa\n", 2);
}

/*int	main()
{
	t_stack	*a;

	*a[3] = "2,1,3";
	ft_sa(&a);
	printf ("%d", a);
	return (0);
}*/