/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:52:33 by aburga-g          #+#    #+#             */
/*   Updated: 2025/03/24 20:19:56 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

t_stack	*ft_stacksub(char **argv)
{
	t_stack	*a;
	char	**temp;
	int		i;

	a = NULL;
	i = 0;
	temp = ft_split(argv[1], 32);
	while (temp[i])
	{
		ft_stack_back(&a, ft_stack_new(ft_atoi_check(temp[i])));
		i++;
	}
	free(temp);
	return (a);
}

t_stack	*ft_stack_add(int argc, char **argv)
{
	t_stack	*temp;
	int		i;

	temp = NULL;
	i = 1;
	if (argc == 2)
		temp = ft_stacksub(argv);
	else
	{
		while (i < argc)
		{
			ft_stack_back(&temp, ft_stack_new(ft_atoi_check(argv[i])));
			i++;
		}
	}
	return (temp);
}

