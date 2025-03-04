/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 08:58:26 by aburga-g          #+#    #+#             */
/*   Updated: 2024/05/24 16:48:32 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief calcula el número de dígitos de un numero entero tanto positivos
 * como negativos.
 * @param num es el número entero cuyo (número dígito) dígito se desea calcular
 * @return int retorna "len" que contine el numero total de dígitos en (num)
 * (incluyendo el signo negativo si el número era negativo).
 */
static int	ft_number_size(int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len += 1;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

/**
 * @brief convierte el numero entero (int) en una cadena de caracteres (char *)
 * 
 * @param n el numero entero que se va a convertir 
 * @return char* es la cadena asignada dinamicamente que representa el numero 
 * entero convertido.
 * se devuelve NULL si falla la asignacíon de memoria.
 */

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	unsigned int	len;

	len = ft_number_size(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}
/*int	main(void)
{
	int	number = -12345; // Número entero a convertir
	// Llamada a la función ft_itoa para convertir el número en una cadena
	char *str = ft_itoa(number);

	if (str == NULL)
	{
		printf("Error: Memoria insuficiente\n");
		return (1);
	}
	// Imprimir la cadena resultante
		printf("El número %d convertido a cadena es: %s\n", number, str);
	// Liberar la memoria asignada
	free(str);
	return (0);
}*/
