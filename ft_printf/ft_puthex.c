/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:15:37 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/11 17:44:55 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char c)
{
	unsigned long long		cont;
	char					*hex;

	cont = 0;
	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n >= 16)
		cont += ft_puthex(n / 16, c);
	if (c == 'x')
		cont += ft_putchar(hex[n % 16]);
	else if (c == 'X')
		cont += ft_putchar(hex[n % 16]);
	return (cont);
}
