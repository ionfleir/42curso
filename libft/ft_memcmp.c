/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-02 16:01:36 by aburga-g          #+#    #+#             */
/*   Updated: 2024-05-02 16:01:36 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief compara los primeros 'n' bytes de dos bloques de memoria.
 * 
 * @param s1 puntero constante al primer bloque de memoria.
 * @param s2 puntero constante al segundo bloque de memoria.
 * @param n numero de bytes que se van a comparar.
 * @return int valor entero que indica la diferencia de la comparación
 * indicando cuál bloque es mayor. 
 * o '0' si las areas de memoria con iguales.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*orig;
	char	*str;
	size_t	i;

	orig = (char *)s1;
	str = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (orig[i] != str[i])
			return ((unsigned char)orig[i] - (unsigned char)str[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "hola";
	char	s2[] = "holA";
	int	n;

	n = memcmp(s1, s2, sizeof(s1));
	if (n == 0)
	{
		printf ("los bloques de memoria son iguales\n");
	}
	else if (n < 0)
	{
		printf ("el primer bloque de memoria es menor que el segundo.\n");
	}
	else
	{
		printf ("el primer bloque de memoria es mayor que el segundo\n");
	}
	n = ft_memcmp(s1, s2, sizeof(int));
	if (n == 0)
	{
		printf ("los bloques de memoria son iguales");
	}
	else if (n < 0)
	{
		printf ("el primer bloque de memoria es menor que el segundo");
	}
	else
	{
		printf ("el primer bloque de memoria es mayor que el segundo");
	}
	return (0);
}*/