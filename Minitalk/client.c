/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:09:12 by aburga-g          #+#    #+#             */
/*   Updated: 2025/01/13 10:22:39 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/minitalk.h"
#include "./ft_printf/ft_printf.h"

/**
 * @brief send_char: Envía un carácter a un proceso usando señales.
 * Esta funf
 * 
 * @param pid Señal que se va enviar SIGUSR1 o SIGUSR2 si el bit es 1 o 0.
 * @param c Caracter que se va enviar.
 * @param delay Tiempo de espera.
 */
void	send_char(int pid, char c, unsigned int delay)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if ((c >> bit) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit--;
		usleep(delay);
	}
}

void	send_str(int pid, const char *str, unsigned int delay)
{
	while (*str)
	{
		send_char(pid, *str, delay);
		str++;
	}
	send_char(pid, '\0', delay);
}

void	val_arg(int argc, char *argv[])
{
	int				pid;
	unsigned int	delay;

	pid = ft_atoi(argv[1]);
	if (pid <= 0)
	{
		ft_printf("Error: PID, invalido.\n");
		exit(EXIT_FAILURE);
	}
	if (argv[2][0] == '\0')
	{
		ft_printf("Error: El mensaje no puede estar vacío.\n");
		exit(EXIT_FAILURE);
	}
	delay = 100;
	if (argc == 4)
		delay = ft_atoi(argv[3]);
	send_str(pid, argv[2], delay);
}

int	main(int argc, char **argv)
{
	int	delay;

	if (argc < 3 || argc > 4)
	{
		ft_printf ("Erro: El numero de argumentos es invalido\n");
		exit(EXIT_FAILURE);
	}
	if (argc == 4)
	{
		delay = ft_atoi(argv[3]);
		if (delay <= 0)
		{
			ft_printf ("Erro: el retraso debe ser mayor a 0\n");
			exit(EXIT_FAILURE);
		}
	}
	val_arg(argc, argv);
	return (0);
}
