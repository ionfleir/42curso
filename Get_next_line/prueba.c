/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:28:23 by aburga-g          #+#    #+#             */
/*   Updated: 2024/08/26 13:29:40 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

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

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;
	size_t	e;

	e = count * size;
	r = malloc (e);
	if (!r)
		return (NULL);
	ft_bzero(r, e);
	return (r);
}
