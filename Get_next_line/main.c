/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:01:41 by aburga-g          #+#    #+#             */
/*   Updated: 2024/08/08 17:01:44 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_terminal(char c);
void	ft_putchar_test_file(char c);

int	main(void)
{
	ft_putchar_terminal('T');
	ft_putchar_test_file('F');
	return (0);
}

void	ft_putchar_terminal(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_test_file(char c)
{
	int	fd;

	fd = open("test.txt", O_RDWR);
	if (fd > 0)
		write(fd, &c, 1);
	else
		write(2, "test.txt no encontrado.\n", 23);
}
