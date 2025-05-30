/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:10:40 by aburga-g          #+#    #+#             */
/*   Updated: 2025/04/17 20:01:14 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc < 2)
		exit(0);
	a = ft_stack_add(argc, argv);
	if (!a || ft_duplicheck(a))
	{
		free_stack(&a);
		ft_error();
	}
	if (!ft_is_sorted(a))
	{
		ft_order(&a);
	}	
	print_stack(a);
	free_stack(&a);
	return (0);
}
