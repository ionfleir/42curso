/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:18:52 by aburga-g          #+#    #+#             */
/*   Updated: 2024/09/17 10:25:38 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/*int	main(void)
{
	char	buffer[] = "vixdeo -rays";
	char	*where;

	where = strchr(buffer, 'x');
	if (where != NULL)
	{
		printf ("'x' encontrada la posicion: %s funcion original\n\n", where);
	}
	else
	{
		printf ("'x' no se encuentra en la cadena");
	}
	where = ft_strchr(buffer, 'x');
	if (where != NULL)
	{
		printf ("'x' encontrada la posicion: %s", where);
	}
	else
	{
		printf ("'x' no se encuentra en la cadena");
	}
	return (0);
}*/
