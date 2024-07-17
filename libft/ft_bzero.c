/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:12:33 by aburga-g          #+#    #+#             */
/*   Updated: 2024/05/23 18:42:44 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief se utiliza para establecer a cero un bloque de memoria.
 * 
 * @param s un puntero al bloque de memoria.
 * @param n el numero de bytes que se establecerán en cero.
 */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "hola, mundo!";
	
	printf ("antes de ft_bezero: %s\n", str);
	ft_bzero(str, 6);
	printf("despues de ft_bzero: ");
	for(size_t i = 0; i < sizeof(str); i++)
	{
		if (str[i] == '\0')
			printf(".");
		else
			printf("%c", str[i]);
	}
	printf("\n");
	return (0);
}*/
