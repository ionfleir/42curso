/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:02:55 by aburga-g          #+#    #+#             */
/*   Updated: 2025/05/22 16:02:55 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

/**
 * @brief fruncion para ordenar 3 numeros segun en que pocision esten 
 * usando solo sa, ra, rra
 * caso: 1 3 2 rra, sa
 * caso: 3 2 1 ra y sa o 3 1 2 ra
 * caso: 2 1 3 sa
 * caso: 2 3 1 rra
 * @param a puntro a la pila que se va ordenar
 */
void	ft_stack_three(t_stack **a)
{
	int	frist;
	int	second;
	int	third;

	frist = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (frist < second && second > third && frist < third) // caso 1 3 2
	{
		ft_rra(a, 1);
		ft_sa(a, 1);
	}
	// caso 3 2 1 y 3 1 2
	if ((frist > second && second > third) || (frist > third && second < third))
	{
		ft_ra(a, 1);
		if (!ft_is_sorted(*a))
			ft_sa(a, 1);
	}

	else if (frist > second && frist < third)// caso 2 1 3
		ft_sa(a, 1);
	else if (frist < second && frist > third) // caso 2 3 1
		ft_rra(a, 1);
}

/**
 * @brief funcion que ordena la pila segun el numero de nodos que contenga la pila
 * si el numero de pilas es igual a 2 hace un swap (ft_sa)
 * si el nuemro de pilas es igual a 3 llama a ft_stack_three 
 * si el numero de polas es mayor a 3 llama a ft_sort
 * 
 * @param a puntero a la pila que se va ordenar.
 */
void	ft_order(t_stack **a)
{
	int	size;

	size = ft_stack_size(*a);
	if (size == 2)
		ft_sa(a, 1);
	else if (size == 3)
		ft_stack_three(a); // crear
	
	//else if (size > 3)
		//ft_sortmax(*a); // crear
	else
		ft_error();
}