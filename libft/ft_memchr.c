/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:00:19 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/25 17:32:58 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (n--)
	{
		if ((unsigned char) str[i] == (unsigned char)c)
			return ((char *) s + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	str[] = "oHla cristina mareia";
	char	*ptr;

	ptr = memchr(str, 'e', ft_strlen(str));
	if (ptr != NULL)
	{
		printf("Se encontró el caracter en la posición %ld\n", ptr - str);
	}
	else
	{
		printf("No se encontró el caractar en la cadena\n");
	}
	ptr = ft_memchr(str, 'e', ft_strlen(str));
	if (ptr != NULL)
	{
		printf("Se encontró el caracter en la posición %ld\n", ptr - str);
	}
	else
	{
		printf("No se encontró el caractar en la cadena\n");
	}
	return (0);
}*/
