/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:51:04 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/11 17:45:03 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int num)
{
	int	cont;

	cont = 0;
	if (num >= 10)
		cont += ft_putnbr_u(num / 10);
	cont += ft_putchar((num % 10) + '0');
	return (cont);
}
