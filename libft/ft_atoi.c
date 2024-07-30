/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:20:30 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/25 13:19:04 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  convierte una cadena de caracteres de tipo char que representa un
 * numero, en una variable entera de tipo "int".
 * 
 * @param str un puntero a la cadena que se va convertir.
 * @return int el numero convertido.
 */

int	ft_atoi(const char *str)
{
	int	i;
	int	negt;
	int	resul;

	i = 0;
	negt = 1;
	resul = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negt *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resul = (str[i] - '0') + (resul * 10);
		i++;
	}
	return (resul * negt);
}

/*int	main(void)
{
	char	s1[] = "1234";
	char	s2[] = "5678";
	int		n;
	int		resul;

	n = atoi(s1);
	printf("el numero original %d\n\n", n);
	n = ft_atoi(s2);
	printf ("%d es el nuevo numero\n\n", n);
	n = atoi(s1);
	resul = n + 10;
	printf ("%d\n\n", resul);
	n = ft_atoi(s2);
	resul = n + 10;
	printf ("%d\n", resul);
	return (0);
}*/
