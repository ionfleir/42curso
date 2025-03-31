/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:56:23 by aburga-g          #+#    #+#             */
/*   Updated: 2025/03/31 14:35:10 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/**
 * @brief La función omite los espacios en blanco iniciales y maneja los 
 * signos '+' y '-'.
 * Si la cadena contiene caracteres no numéricos (exceptuando los mencionados), 
 * se llama a `ft_error()`.
 * También verifica si el número resultante excede los límites de un
 * entero (`INT_MAX` o `INT_MIN`) en cuyo caso también llama a `ft_error()`.
 * 
 * @param str puntero a la cadena de caracteres a convertir.
 * @return int de vuelve la cadena convertida en su entero.
 */
int	ft_atoi_check(const char *str)
{
	int		neg;
	long	resul;

	neg = 1;
	resul = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ' || (*str == '+'))
		str++;
	if (*str == '-')
	{
		neg *= -1;
		str++;
	}
	if (!*str)
		ft_error();
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_error();
		resul = (*str - '0') + (resul * 10);
		str++;
		if ((neg * resul) > INT_MAX || (neg * resul) < INT_MIN)
			ft_error();
	}
	return (resul * neg);
}
