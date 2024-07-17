/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-22 18:20:07 by aburga-g          #+#    #+#             */
/*   Updated: 2024-04-22 18:20:07 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (n == 0)
		return (i);
	i = 0;
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	char	src[] = "945";
	char	dest[15];

	ft_strlcpy(dest, src, sizeof(dest));
	printf ("%s", dest);
	return (0);
}*/