/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:18:34 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/11 17:45:20 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *c)
{
	int	ptr;

	ptr = 0;
	if (c == NULL)
		ptr += ft_putstr("(nil)");
	else
	{
		ptr += ft_putstr("0x");
		ptr += ft_puthex((unsigned long long)c, 'x');
	}
	return (ptr);
}
