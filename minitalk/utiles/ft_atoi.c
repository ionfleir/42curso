/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:19:57 by aburga-g          #+#    #+#             */
/*   Updated: 2024/11/11 13:19:57 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	ft_atoi(char *str)
{
	int	i;
	int	resul;
	int	neg;

	i = 0;
	neg = 1;
	resul = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resul = (str[i] - '0') + (resul * 10);
		i++;
	}
	return (resul * neg);
}

/*int	main(int argc, char **argv)
{
	int	n;

	if (argc != 2)
		write (1, "\n", 1);
	n = ft_atoi(argv[1]);
	printf("%d, este es el resultado:", n);
	return (0);
}*/