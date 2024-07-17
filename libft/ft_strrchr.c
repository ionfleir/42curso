/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:18:08 by aburga-g          #+#    #+#             */
/*   Updated: 2024/05/23 15:51:32 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*aux;

	aux = NULL;
	while (*s)
	{
		if (*s == (char)c)
			aux = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)aux);
}

/*int	main(void)
{
	char	buffer[] = "vixdeo -rays";
	char	*where;

	where = strrchr(buffer, 'x');
	if (where != NULL)
	{
		printf ("'x' encontrada la posicion: %s funcion original\n\n", where);
	}
	else
	{
		printf ("'x' no se encuentra en la cadena");
	}
	where = ft_strrchr(buffer, 'x');
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
