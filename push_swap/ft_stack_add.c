/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:52:33 by aburga-g          #+#    #+#             */
/*   Updated: 2025/03/20 18:51:49 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

t_stack	ft_stack_div(t_stack *valur);

t_stack	*ft_stack_add(int argc, char **argv)
{
	t_stack	*temp;
	int		i;
	/*int		j;*/

	temp = NULL;
	i = 1;
	/*if (argc == 2)
		temp;// = fucion para divider la cadena (subcadena)*/
	while (i < argc)
	{
		ft_stack_back(&temp, ft_stack_new(atoi(argv[i])));
		i++;
	}
	return (temp);
}

