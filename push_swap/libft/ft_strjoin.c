/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:13:03 by aburga-g          #+#    #+#             */
/*   Updated: 2024/08/24 13:14:46 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	size_t	resul;

	if (!s1 || !s2)
		return (NULL);
	resul = ft_strlen(s1) + ft_strlen(s2);
	str = (char *) malloc (resul + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*s1 = "hola cara cola ";
	char	*s2 = "come pan con cola";
	char	*s3;

	s3 = ft_strjoin(s1, s2);
	printf ("es la nuevo cadena: %s\n\n", s3);
	return (0);
}*/
