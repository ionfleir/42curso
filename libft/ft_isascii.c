/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:57:32 by aburga-g          #+#    #+#             */
/*   Updated: 2024/05/23 19:49:09 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief comprueba si el carácter determinado está dentro del rango ASCII.
 * 
 * @param c el carácter a comprobar.
 * @return int si el carácter esta dentro del rango ASCII del 0 al 127,
 * devuelve 1 de lo contrario devuelve 0
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
