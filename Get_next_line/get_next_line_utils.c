/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:46:31 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/30 15:21:11 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned long int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		if ()
		i++;
	}
		
		
	if (s[i] == c)
		return (s);
	return (NULL);
}
int	main(void)
{
	char	str[] = "hola-cara cola";
	char	*c;

	c = ft_strchr(str, '-');
	printf ("%s", c);
	return (0);
}
