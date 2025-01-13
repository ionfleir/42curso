/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:09:06 by aburga-g          #+#    #+#             */
/*   Updated: 2025/01/13 10:24:31 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/minitalk.h"
#include "./ft_printf/ft_printf.h"

void	signal_handler(int signal)
{
	static int	current_char = 0;
	static int	bit_count = 0;

	if (signal == SIGUSR1)
		current_char = (current_char << 1) | 1;
	else if (signal == SIGUSR2)
		current_char = (current_char << 1);
	bit_count++;
	if (bit_count == 8)
	{
		write (1, &current_char, 1);
		bit_count = 0;
		current_char = 0;
	}
}

int	main(void)
{
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	ft_printf ("Servidor: obtenido ID del Procese %d\n", getpid());
	while (1)
	{
		pause();
	}
	return (0);
}
