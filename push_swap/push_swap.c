/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:10:40 by aburga-g          #+#    #+#             */
/*   Updated: 2025/03/31 14:22:12 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc < 2)
		exit(0);
	a = ft_stack_add(argc, argv);
	if (!a || si hay duplicados(a))
	/*comprobar si la pila no se creo (!a), o si hay duplicados Funcion si hay 
	//duplicados.
	{
		//si hay un problema
		//liberamos memoria(a); //crear una funcion para liberar memoria.
		ft_error();
	}
	//una vez tenemos la pilla verificamos si esta ordenada
	if (no esta ordenada(a))
		//llamamos a un funcion para ordenar la pila(a);
	//liberamos memoria utilizada por la pila(a);*/
	print_stack(a);
	return (0);
}
