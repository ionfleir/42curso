/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-18 12:58:51 by aburga-g          #+#    #+#             */
/*   Updated: 2024-04-18 12:58:51 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief llena un bloque de memoria con una valor específico.
 * 
 * @param b puntero al bloque de memoria que se va a llenar.
 * @param c el valor a establecer.
 * @param n numero de bytes que se establecerán.
 * @return void* un puntero al bloque de memoria una vez que se ha llenado.
 */
void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	char	str[40];

	memset (str, 'h', 5);
	printf ("Memset original: %s\n", str);
	ft_memset (str, 'h', 5);
	printf ("%s\n", str);
	return (0);
}*/
