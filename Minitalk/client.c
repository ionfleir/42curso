/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:09:12 by aburga-g          #+#    #+#             */
/*   Updated: 2025/01/15 11:41:35 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/minitalk.h"
#include "./ft_printf/ft_printf.h"

/**
 * @brief send_char: Envía un caracter (c) bit a bit del mas significativo (7)
 * al menos significativo (0), atravez de señales al proceso con el
 * identificador PID, utiliza las señales SIGUSR1 Y SIGUSR2 representar 1 y 0,
 * (usleep), lo usamos para asegurar un retraso para el envio de las señales. 
 * 
 * @param pid Identificador donde se envian las señales SIGUSR1 Y SIGUSR2
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

/**
 * @brief send_str: envía cada carácter de una cadena incluido el termino nulo
 al proceso (PID). Cada carácter se transmite uno por uno me dienta la funcion
 send_char con un retraso configurable (delay).
 
 * @param pid Identificador donde se envia las señales
 * @param str Cadena que se envia
 * @param delay Tiempo de espera
 */
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
		ft_printf ("Error: El numero de argumentos es invalido\n");
		exit(EXIT_FAILURE);
	}
	if (argc == 4)
	{
		delay = ft_atoi(argv[3]);
		if (delay <= 0)
		{
			ft_printf ("Error: el retraso debe ser mayor a 0\n");
			exit(EXIT_FAILURE);
		}
	}
	val_arg(argc, argv);
	return (0);
}
