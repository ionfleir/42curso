/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:48:57 by aburga-g          #+#    #+#             */
/*   Updated: 2025/06/12 11:10:54 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/**
 * @brief Esta funcion busca el indice donde se encuentra el valor numerico
 * que se le da en una pila
 * 
 * @param a puntero a la pila A
 * @param nbr valor numerico que se va buscar
 * @return int Devuelve la posicion donde se encuntra el numero
 */
int	ft_index(t_stack *a, int nbr)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->value == nbr)
			return (i);
		a = a->next;
		i++;
	}
	return (-1);
}

/*int main(void)
{
	t_stack *a = NULL;
	int pos;
	// Creamos la pila manualmente: [4] → [1] → [3] → [2]
	ft_stack_back(&a, ft_stack_new(4));
	ft_stack_back(&a, ft_stack_new(1));
	ft_stack_back(&a, ft_stack_new(3));
	ft_stack_back(&a, ft_stack_new(2));
	print_stack(a); // Debería imprimir: 4 1 3 2
	pos = ft_index(a, 3);
	printf("El valor 3 está en la posición: %d\n", pos);  // Esperado: 2
	pos = ft_index(a, 1);
	printf("El valor 1 está en la posición: %d\n", pos);  // Esperado: 1
	pos = ft_index(a, 4);
	printf("El valor 4 está en la posición: %d\n", pos);  // Esperado: 0
	free_stack(&a);
	return 0;
}*/

/**
 * @brief Busca el valor minimo que se encuenta en una pila, no modifica la pila
 * 
 * @param a puntero a la pila que se va buscar el valor
 * @return int devuelve el valor minimo
 */
int	ft_valmin(t_stack *a)
{
	int	min;

	if (!a)
		return (0);
	min = a->value;
	while (a)
	{
		if (a->value < min)
			min = a->value;
		a = a->next;
	}
	return (min);
}

/*int	main(int argc, char **argv )
{
	t_stack *a = NULL;
	int	n;

	if (argc < 2)
		exit(0);

	a = ft_stack_add(argc, argv);
		if (!a)
		ft_error();
	n = ft_valmin(a);
	print_stack(a);
	printf("el valor minimo de esta pila es %d", n);
	free_stack(&a);
	return (0);
}*/

/**
 * @brief Busca el valor maximo que se encuenta en una pila, no modifica la pila
 * 
 * @param a puntero a la pila donde se va buscar el valor
 * @return int devuelve el valor maximo
 */
int	ft_valmax(t_stack *a)
{
	int	max;

	if (!a)
		return (0);
	max = a->value;
	while (a)
	{
		if (a->value > max)
			max = a->value;
		a = a->next;
	}
	return (max);
}

/*int	main(int argc, char **argv )
{
	t_stack *a = NULL;
	int	n;

	if (argc < 2)
		exit(0);

	a = ft_stack_add(argc, argv);
	if (!a)
		ft_error();
	n = ft_valmax(a);
	print_stack(a);
	printf("el valor maximo de esta pila es %d", n);
	free_stack(&a);
	return (0);
}*/