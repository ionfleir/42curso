/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-13 14:59:35 by aburga-g          #+#    #+#             */
/*   Updated: 2024-05-13 14:59:35 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief toma un numero entero 'n' y lo escribe en el archivo o dispositivo
 * indicado por el descriptor de archivo 'fd'. Maneje números negativos y el
 * valor mínimo de un entero con signo en C de manera especial.
 * 
 * @param n el numero entero que se va escribir.
 * @param fd el descriptor de archivo donde se va a escribir el numero.
 */

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
	else
	{
		ft_putchar_fd (n + '0', fd);
	}
}

/*int	main(void)
{
	int	num1 = 123;
	int	num2 = -456;
	int	num3 = 0;
	int	num4 = -2147483648;

	ft_putnbr_fd(num1, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_putnbr_fd(num2, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_putnbr_fd(num3, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_putnbr_fd(num4, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (0);
}*/
