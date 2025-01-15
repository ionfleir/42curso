/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:38:19 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/11 17:45:11 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int	cont;

	cont = 0;
	if (num == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	if (num < 0)
	{
		cont += ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
		cont += ft_putnbr(num / 10);
	cont += ft_putchar((num % 10) + '0');
	return (cont);
}
