/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:52:59 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/25 17:38:15 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len_n;

	str = 0;
	len_n = ft_strlen(s);
	if (len_n == 0 || start > len_n || len <= 0)
		return (ft_strdup(""));
	else
	{
		if ((len + start) > len_n)
			len = (len_n - start);
	}
	str = (char *)malloc((len + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	const char	*src = "Hello, world!";
	int	start = 7;
	int	len = 15;
	char *sub = ft_substr(src, start, len);

	if (sub != NULL)
	{
		printf ("Subcadena: %s\n", sub);
		free (sub); // No olvides liberar la memoria asignada para la subcadena
	}
	else
	{
 		printf ("Error: No se pudo extraer la subcadena\n");
	}
	return (0);
}*/