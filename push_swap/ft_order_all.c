/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:02:55 by aburga-g          #+#    #+#             */
/*   Updated: 2025/06/12 12:05:17 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

/**
 * @brief funcion que ordena 5 numeros usando dos pilas, utiliza un indece para
 * en contrar la posicion del valor mas pequeño y asi poder elegir de formas mas
 * eficiente y en menor costo posible de operaciones, mueve los dos mas pequeños
 * a la pila B, dejando 3 en la pila a llama a ft_stack_tree para ordenar,
 * una vez
 * ordenado devuelve a la pila A los nodos de la pila B ya ordenados
 * 
 * @param a puntero a la pila que se va ordenar
 */
void	ft_stack_five(t_stack **a)
{
	t_stack	*b;
	int		pos;

	b = NULL;
	while (ft_stack_size(*a) > 3)
	{
		pos = ft_index(*a, ft_valmin(*a));
		if (pos < ft_stack_size(*a) - pos)
			while ((*a)->value != ft_valmin(*a))
				ft_ra(a, 1);
		else
			while ((*a)->value != ft_valmin(*a))
				ft_rra(a, 1);
		ft_pb(a, &b, 1);
	}
	ft_stack_three(a);
	while (b)
		ft_pa(a, &b, 1);
}

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
	if (frist < second && second > third && frist < third)// caso 1 3 2
	{
		ft_rra(a, 1);
		ft_sa(a, 1);
	}	// caso 3 2 1 y 3 1 2
	if ((frist > second && second > third) || (frist > third && second < third))
	{
		ft_ra(a, 1);
		if (!ft_is_sorted(*a))
			ft_sa(a, 1);
	}
	else if (frist > second && second < third && frist < third)// caso 2 1 3
		ft_sa(a, 1);
	else if (frist < second && second > third && frist > third)// caso 2 3 1
		ft_rra(a, 1);
}

/**
 * @brief funcion que ordena la pila segun el numero de nodos que
 * contenga la pila
 * si el numero de pilas es igual a 2 hace un swap (ft_sa)
 * si el numero de pilas es igual a 3 llama a ft_stack_three
 * si el numero de pilas es igual a 5 llama a ft_stack_five
 * si el numero de pilas es mayor a 5 llama a ft_sortmax
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
	else if (size == 5)
		ft_stack_five(a);
	else if (size > 5)
	{
		ft_assign_index(*a);
		ft_sortmax(a); // crear
	}
}