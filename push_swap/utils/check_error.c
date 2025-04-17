/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:18:44 by aburga-g          #+#    #+#             */
/*   Updated: 2025/04/17 20:26:35 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/**
 * @brief funcion para la salida estandar si ocurre un error
 * seguido de un salto de linea "\n".
 */
void	ft_error(void)
{
	write(1, "error\n", 6);
	exit(1);
}

int	ft_duplicheck(t_stack *a)
{
	t_stack	*temp;
	t_stack	*i;

	i = a;

	while (i)
	{
		temp = i->next;
		while (temp)
		{
			if (temp->value == i->value)
				return (1);
			temp = temp->next;
		}
		i = i->next;
	}
	return (0);
}
/**
 * @brief comprobamos si la pila esta ordenada de menor a mayor.
 * 
 * Recorre la pila comparando cada nodo con el siguiente, si en algun 
 * momento el valor es mayor que el siguente, devuelve 0 (no esta ordenado).
 * Si llega al final sin encontrar errores, devuelve 1 (esta ordenado)
 * @param a puntero al nodo que va verificar
 * @return int devuelve 0 si no esta ordenado y 1 si esta ordenado.
 */
int	ft_is_sorted(t_stack *a)
{
	while (a && a->next)
	{
		if (a->value > a->next->value)
			return (0); // si no esta ordenado
		a = a->next;
	}
	return (1); // esta ordenado
}