/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-29 15:21:18 by aburga-g          #+#    #+#             */
/*   Updated: 2024-04-29 15:21:18 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;

	if (haystack == NULL && n == 0)
		return (NULL);
	if ((!*needle) || (needle == NULL))
		return ((char *)haystack);
	while ((*haystack) && n--)
	{
		i = 0;
		while ((haystack[i]) == (needle[i]) && (needle[i]) && i <= n)
		{
			if (!*(needle + i + 1))
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*str = "Foo Bar Baztere";
	char	*sub = "Bar";


	ft_strnstr (str, sub, sizeof(str));
	printf ("%s\n", ft_strnstr(str, sub, 10));
	strnstr (str, sub, sizeof(str));
	printf ("%s\n", strnstr(str, sub, 10));
	return (0);
}*/