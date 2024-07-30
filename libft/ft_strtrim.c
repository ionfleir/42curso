/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:32:07 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/30 11:19:04 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (!s1)
		return (ft_strdup(""));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > 0 && ft_strchr(set, s1[j]))
		j--;
	j = j - i;
	str = ft_substr((char *) s1, i, j + 1);
	return (str);
}

/*int	main(void)
{
	const char	*s1 = "   Hello, world!   ";
	const char	*set = " ";
	char		*trimmed_str;

	trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str)
	{
		printf("Original string: \"%s\"\n", s1);
		printf("Trimmed string: \"%s\"\n", trimmed_str);
		free(trimmed_str);
	}
	else
	{
		printf("Error: Unable to allocate memory\n");
	}
	return (0);
}*/