/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-07 15:32:19 by aburga-g          #+#    #+#             */
/*   Updated: 2024-05-07 15:32:19 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	str = (char *) malloc(sizeof(*str) * (j + 1));
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	const char	*orig = "hola, mmundo!";
	char	*cpy = "que tal como estas yo bien";

	cpy = ft_strdup(orig);
	if (cpy == NULL)
	{
		printf ("Error: no se puede copiar la cadena\n");
		return (EXIT_FAILURE);
	}
	printf ("copia la cadena: %s\n", cpy);
	free (cpy);
	return (0);
}*/
