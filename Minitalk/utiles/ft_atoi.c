/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:19:57 by aburga-g          #+#    #+#             */
/*   Updated: 2025/01/10 15:42:13 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	ft_atoi(const char *str)
{
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		if (*str < '0' || *str > '9')// si no son numeros
		{
			printf("Error: Debe ser un número válido.\n");
			exit(EXIT_FAILURE);
		}
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

/*int	main(int argc, char **argv)
{
	int	n;

	if (argc != 2)
		write (1, "\n", 1);
	n = ft_atoi(argv[1]);
	printf ("este es el resultado:%d\n", n);
	return (0);
}*/

