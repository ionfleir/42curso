/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:28:58 by aburga-g          #+#    #+#             */
/*   Updated: 2025/05/21 17:28:58 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

//---reverse---

/**
 * @brief retorna el node inferio hacia arriba utilizando ft_stacklast para llegar
 * al final de la pila y ft_stack_front para colocarlo el inicio.
 * 
 * @param a puntero a la pila 'A'
 * @param print imprime 'rra'
 */
void	ft_rra(t_stack **a, int print)
{
	t_stack	*prev;
	t_stack	*last;

	if (!a || !*a || !(*a)->next)
		return ;

	last = ft_stacklast(*a);
	prev = *a;
	while (prev->next != last)
		prev = prev->next;
	prev->next = NULL;
	ft_stack_front(a, last);
	if (print)
		write(1, "rra\n", 4);
}

/**
 * @brief retorna el node inferio hacia arriba utilizando ft_stacklast para llegar
 * al final de la pila y ft_stack_front para colocarlo el inicio.
 * 
 * @param b puntero a la pila 'B'
 * @param print imprime 'rrb'
 */
void	ft_rrb(t_stack **b, int print)
{
	t_stack	*prev;
	t_stack	*last;

	if (!b || !*b || !(*b)->next)
		return ;

	last = ft_stacklast(*b);
	prev = *b;
	while (prev->next != last)
		prev = prev->next;
	prev->next = NULL;
	ft_stack_front(b, last);
	if (print)
		write(1, "rrb\n", 4);
}

/**
 * @brief retorna tanto a como b a la vez
 * 
 * @param a puntero a la pila 'A'
 * @param b puntero a la pila 'B'
 * @param print imprime 'rrr'
 */
void	ft_rrr(t_stack **a, t_stack **b, int print)
{
	ft_rra(a, 0);
	ft_rrb(b, 0);
	if (print)
		write(1, "rrr\n", 4);
}

/*int	main (void)
{
	//t_stack	*b = NULL;
	t_stack	*a = NULL;

	// Crear pila con los argumentos
	ft_stack_back(&a, ft_stack_new(3));
	ft_stack_back(&a, ft_stack_new(2));
	ft_stack_back(&a, ft_stack_new(1));

	// Creamos manualmente la pila B con los valores 6, 5, 4
	//ft_stack_back(&b, ft_stack_new(6));
	//ft_stack_back(&b, ft_stack_new(5));
	//ft_stack_back(&b, ft_stack_new(4));

	// Mostrar pila antes de la operacion
	printf("Antes de rrb:\n");
	printf("Pila A:\n");
	print_stack(a);
	//printf("Pila B:\n");
	//print_stack(b);

	//Ejecuatar funcion//
	ft_rra(&a, 1);  // 1 para que escriba "el contenido"

	printf("\nDespues de rrb:\n");
	printf("Pila A:\n");
	print_stack(a);
	//printf("Pila B:\n");
	//print_stack(b);

	// Liberar memoria
	free_stack(&a);
	//free_stack(&b);
	return (0);
}*/