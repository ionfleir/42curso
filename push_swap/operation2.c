/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:05:04 by aburga-g          #+#    #+#             */
/*   Updated: 2025/05/21 15:05:04 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

//----Rotate----
/**
 * @brief ft_ra: rota el nodo superior de la pila "a" hacia abajo,
 * utiliza 'ft_stacklast' para recorrer la pila hasta el final.
 * Desplaza los nodos restantes hacia arriba, dejando el primer 
 * nodo en la ultima posición.
 * 
 * @param a puntero a la pila 'a'.
 * @param print salida estandar imprime "ra".
 * 
 *  * Ejemplo gráfico:
 * Antes: a -> [3] -> [1] -> [2]
 * Después: a -> [1] -> [2] -> [3]
 */
void	ft_ra(t_stack **a, int print)
{
	t_stack	*first;
	t_stack	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	*a = (*a)->next;
	first->next = NULL;
	last = ft_stacklast(*a);
	last->next = first;
	if (print)
		write(1, "ra\n", 3);
}

/**
 * @brief ft_rb, rota el nodo superior de la pila "b" hacia abajo,
 * utiliza 'ft_stacklast' para recorrer la pila hasta el final.
 * Desplaza los nodos restantes hacia arriba, dejando el primer 
 * nodo en la ultima posición.
 * 
 * @param b puntero a la pila "b".
 * @param print salida estandar imprime "rb"
 * 
 *  * Ejemplo gráfico:
 * Antes: a -> [3] -> [1] -> [2]
 * Después: a -> [1] -> [2] -> [3]
 */
void	ft_rb(t_stack **b, int print)
{
	t_stack	*first;
	t_stack	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	*b = (*b)->next;
	first->next = NULL;
	last = ft_stacklast(*b);
	last->next = first;
	if (print)
		write(1, "rb\n", 3);
}

/**
 * @brief ft_rr rota los nodos de las pilas "a" y "b" al mismo tiempo y desplaza
 * los nodos restantes hacia arriba dejandolos en la ultima posicion.
 * 
 * @param a puntero a la pila 'a'
 * @param b puntero a la pila 'b'
 * @param print salida estandar imprime "rr"
 */
void	ft_rr(t_stack **a, t_stack **b, int print)
{
	if (!a || !*a || !(*a)->next || !b || !*b || !(*b)->next)
		return ;
	ft_ra(a, 0);
	ft_rb(b, 0);
	if (print)
		write(1, "rr\n", 3);
}

/*int main (void)
{
	t_stack	*b = NULL;
	t_stack	*a = NULL;

	// Crear pila con los argumentos 3, 2, 1
	ft_stack_back(&a, ft_stack_new(3));
	ft_stack_back(&a, ft_stack_new(2));
	ft_stack_back(&a, ft_stack_new(1));

	// Creamos manualmente la pila B con los valores 6, 5, 4
	ft_stack_back(&b, ft_stack_new(6));
	ft_stack_back(&b, ft_stack_new(5));
	ft_stack_back(&b, ft_stack_new(4));

	// Mostrar pila antes de la orden
	printf("Antes de rr:\n");
	printf("Pila A:\n");
	print_stack(a);
	printf("Pila B:\n");
	print_stack(b);

	//Ejecuatar funcion//
	ft_rr(&a, &b, 1);  // 1 para que escriba la orden

	printf("\nDespues de rr:\n");
	printf("Pila A:\n");
	print_stack(a);
	printf("Pila B:\n");
	print_stack(b);

	// Liberar memoria
	free_stack(&a);
	free_stack(&b);
	return (0);
}*/