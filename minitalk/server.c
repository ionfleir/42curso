/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:09:06 by aburga-g          #+#    #+#             */
/*   Updated: 2024/11/06 17:09:06 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/minitalk.h"

void	signal_handler(int signal)
{
	static int	current_char = 0;
	static int	bit_count = 0;

	// Acumular el bit recibido
	if (signal == SIGUSR1)
		current_char = (current_char << 1) | 1; // Añadir un '1'
	else if (signal == SIGUSR2)
		current_char = (current_char << 1); // Añadir un 0
	bit_count++;

	// Si hemos recibido los 8 bits, imprimir el carácter
	if (bit_count == 8)
	{
		write (1, &current_char, 1); // Imprimir el carácter
		bit_count = 0;               // Reiniciar el contador de bits
		current_char = 0;            // Reiniciar el acumilador
	}
}

int	main(void)
{
	// Registrar los manejadores de señales
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);

	// Mostrar el ID del proceso
	printf ("Servidor: obtenido ID del Procese %d\n", getpid());

	//Bucle infinito esperando señales
	while (1)
	{
		pause(); //Suspende el proceso hasta que reciba una señal
	}
	return (0);
}