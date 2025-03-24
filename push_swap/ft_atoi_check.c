/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:56:23 by aburga-g          #+#    #+#             */
/*   Updated: 2025/03/24 20:37:48 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int	ft_atoi_check(const char *str)
{
	int		i;
	int		neg;
	long	resul;

	i = 0;
	neg = 1;
	resul = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	if (!*str)
		ft_error();
	while (str[i])
	{
		if (!ft_isdigit(*str))
			ft_error();
		resul = (str[i] - '0') + (resul * 10);
		i++;
	}
	if ((neg * resul) > 2147483647 || (neg * resul) < -2147483648)
		ft_error();
	return (resul * neg);
}
