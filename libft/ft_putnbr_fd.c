/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:59:35 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/30 11:39:58 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
