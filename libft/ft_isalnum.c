/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:57:23 by aburga-g          #+#    #+#             */
/*   Updated: 2024/05/23 19:32:24 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief comprueba si el carácter determinado es un carácter alfabético
 * o un dígito.
 * 
 * @param c caracter a comprobar.
 * @return int si el carácter es un carácter alfabético o un digíto de vuelve 1
 * de lo contrario devuelve cero.
 */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	i = ' ';
	int		n;

	n = ft_isalnum (i);
	printf ("%d", n);
	return (0);
}*/
