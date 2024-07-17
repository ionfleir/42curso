/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:56:32 by aburga-g          #+#    #+#             */
/*   Updated: 2024/05/23 19:43:05 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief comprueba si el carácter determinado es un carácter alfabétido.
 * 
 * @param c el caracter a determinar.
 * @return int si el carácter es un carácter alfabético de vuelve "1"
 * de lo contrario cero.
 */

int	ft_isalpha(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}

/*int	main(void)
{
	char	i = '1';
	int		n;

	n = ft_isalpha(i);
	printf("%d", n);
	return (0);
}*/
