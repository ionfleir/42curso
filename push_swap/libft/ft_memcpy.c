/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:30:16 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/25 17:21:20 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if ((!dest && !src) || (dest == src))
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "hola mundo";
	char	dest[10];
	void	*n;

	n = memcpy(dest, src, 12);
	printf("funsion original: %s\n\n", dest);
	n = ft_memcpy(dest, src, 12);
	printf("funcion 2: %s", dest);
	return (0);
}
*/