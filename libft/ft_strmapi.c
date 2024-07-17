/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-12 14:09:50 by aburga-g          #+#    #+#             */
/*   Updated: 2024-05-12 14:09:50 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	str = (char *) malloc (sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	ft_uppercase(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
int	main(void)
{
	char	*ori = "hola cara cola";
	char	*src;

	src = ft_strmapi(ori, &ft_uppercase);
	if (src)
	{
		printf ("original: %s\n", ori);
		printf ("Modificado: %s\n", src);
		free (src);
	}
	else
	{
		printf("Error: no se puede asignar memoria.\n");
		return (1);
	}
	return (0);
}*/
