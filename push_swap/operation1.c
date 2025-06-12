/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 19:08:51 by aburga-g          #+#    #+#             */
/*   Updated: 2025/06/12 10:39:32 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

//----swapp----
/**
 * ft_sa - Intercambia los dos primeros elementos de la pila 'a'.
 *
 * @a: Puntero doble a la pila (lista enlazada de tipo t_stack).
 * @print: Si es distinto de 0, imprime "sa\n" como salida estándar.
 *
 * Ejemplo gráfico:
 * Antes: a -> [3] -> [1] -> [2]
 * Después: a -> [1] -> [3] -> [2]
 */

void	ft_sa(t_stack **a, int print)
{
	t_stack	*first;
	t_stack	*second;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	second = (*a)->next;

	first->next = second->next;
	second->next = first;

	*a = second;
	if (print)
		write(1, "sa\n", 3);
}

/**
 * ft_sb - Intercambia los dos primeros elementos de la pila 'b'.
 *
 * @a: Puntero doble a la pila (lista enlazada de tipo t_stack).
 * @print: Si es distinto de 0, imprime "sb\n" como salida estándar.
 *
 * Ejemplo gráfico:
 * Antes: a -> [3] -> [1] -> [2]
 * Después: a -> [1] -> [3] -> [2]
 */
void	ft_sb(t_stack **b, int print)
{
	t_stack	*first;
	t_stack	*second;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	second = (*b)->next;

	first->next = second->next;
	second->next = first;

	*b = second;
	if (print)
		write (1, "sb\n", 3);
}

/**
 * @brief intercamba los dos primeros nodos a la vez tanto de la pila A y B
 * 
 * @param a puntero que apunta a la pila A.
 * @param b puntero que apunta a la Pila B.
 * @param print salida estandar imprime "ss" al terminar
 */
void	ft_ss(t_stack **a, t_stack **b, int print)
{
	if (!a || *a || !(*a)->next || !b || !*b || !(*b)->next)
		return ;
	ft_sa(a, 0);
	ft_sb(b, 0);
	if (print)
		write(1, "ss\n", 3); 
}


/*int main (void)
{
	t_stack	*b = NULL;
	t_stack	*a = NULL;

	// Crear pila con los argumentos
	ft_stack_back(&a, ft_stack_new(3));
	ft_stack_back(&a, ft_stack_new(2));
	ft_stack_back(&a, ft_stack_new(1));

	// Creamos manualmente la pila B con los valores 6, 5, 4
	ft_stack_back(&b, ft_stack_new(6));
	ft_stack_back(&b, ft_stack_new(5));
	ft_stack_back(&b, ft_stack_new(4));

	// Mostrar pila antes de sa
	printf("Antes de ss:\n");
	printf("Pila A:\n");
	print_stack(a);
	printf("Pila B:\n");
	print_stack(b);
	// Ejecutar ss
	ft_ss(&a, &b, 1);  // 1 para que escriba "ss\n"


	printf("\nDespues de ss:\n");
	printf("Pila A:\n");
	print_stack(a);
	printf("Plia B:\n");
	print_stack(b);

	// Liberar memoria
	free_stack(&a);
	free_stack(&b);
	return (0);
}*/

//----Push----

/**
 * @brief la funcion ft_pa se utilisa para mover un nodo de la pila 'B' a la pila 'A',
 * 
 * @param a puntero que apunta a la pila a;
 * @param b puntero que apunta a la pila b;
 * @param print salida estandar imprime "pa" al terminar.
 */
void	ft_pa(t_stack **a, t_stack **b, int print)
{
	t_stack	*temp;

	if (!*b)
		return ;
	temp = *b;
	*b = (*b)->next;
	ft_stack_front(a, temp);
	if (print)
		write(1, "pa\n", 3);
}

/**
 * @brief la fincion ft_pb se utilisa para mover un nodo de la pila 'A' a la pila 'B'
 * 
 * @param a puntero a la pila 'A'
 * @param b puntero a la pila 'B'
 * @param print salidad estandar imprime "pb" al terminar.
 */
void	ft_pb(t_stack **a, t_stack **b, int print)
{
	t_stack	*temp;

	if (!*a)
		return ;
	temp = *a;
	*a = (*a)->next;
	ft_stack_front(b, temp);
	if (print)
		write(1, "pb\n", 3);
}

/*int	main(int argc, char **argv )
{
	t_stack *a = NULL;
	t_stack *b = NULL;

	if (argc < 2)
		exit(0);

	b = ft_stack_add(argc, argv);
	if (!b)
		ft_error();
	printf("Antes del pa:\n");
	printf("Pila A:\n");
	print_stack(a);
	printf("Pila B:\n");
	print_stack(b);

	ft_pa(&a, &b, 1);

	printf("Despues del pb:\n");
	printf("Pila A:\n");
	print_stack(a);
	printf("Pila B\n");
	print_stack(b);

	free_stack(&a);
	free_stack(&b);
	return (0);
}*/
