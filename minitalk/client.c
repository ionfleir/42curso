/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:09:12 by aburga-g          #+#    #+#             */
/*   Updated: 2024/11/06 17:09:12 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/minitalk.h"

void	send_char(int pid, char c, unsigned int delay)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if ((c >> bit) & 1) // Desplazamos el bit haci la derecha y verificamos si es 1 o 0
			kill(pid, SIGUSR1); // Enviar señal SIGUSR1 si el bit es 1
		else
			kill(pid, SIGUSR2); // Enviar señal SIGUIR2 si el bit es 0
		bit--; // Pasamos al siguiente bit 
		usleep(delay); // Esperamos para dar tiempo al receptor
	}
}

void	send_str(int pid, const char *str, unsigned int delay)
{
	while (*str)
	{
		send_char(pid, *str, delay); // Enviamos cada caracter de la cadena
		str++; // Pasar al siguente caracter
	}
	send_char(pid, '\0', delay); // Enviar el caracter nulo para indicar el fin de la cadena
}

int main(void)
{
	int				pid_str[16];
	int				pid;
	const char		*mesg = "hola mundo";
	unsigned int	delay = 200;

	pid = ft_atoi(pid_str);
	send_str(pid, mesg, delay);
	return (0);
}

/*int	main(int argc, char **argv)
{
	int pid;

	if (argc != 3)
	{
		printf("numero argumentos erroneos\n");
		return (1);
	}
	// convierte el PID y el mensaje desde los argumentos
	pid = ft_atoi(argv[1]);
	send_str(pid, argv[2], argv[3]); // enviar mensaje al procese con PID
	return (0);
}*/