/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:10:40 by aburga-g          #+#    #+#             */
/*   Updated: 2025/06/12 10:40:08 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a; // Declaramos una varaible con puntero "a" pila (t_stack)

	if (argc < 2) // verificamos que nos den mas de 2 argumentos.
		exit(0); // si no termina el programa
	a = ft_stack_add(argc, argv); // Creamos la pila a con los valores pasados
	if (!a || ft_duplicheck(a)) //verficamos si exite la pila a y si no hay duplicados
	{
		free_stack(&a); // liberamos todos los stacks
		ft_error(); // imprimimos si "error" si no existe "a" o si hay duplicados.
	}
	if (!ft_is_sorted(a))// verificamos si esta ordenado en forma acendente
		ft_order(&a); //ordemanos toda la pila.
	print_stack(a); // imprimimos la pila ordenada
	free_stack(&a);// liberamos memoria de la pila
	return (0);
}
