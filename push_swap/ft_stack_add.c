/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:52:33 by aburga-g          #+#    #+#             */
/*   Updated: 2025/04/16 11:43:03 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

t_stack	*ft_stacksub(char **argv)
{
	t_stack	*a;
	char	**temp;
	int		i;

	a = NULL;
	i = 0;
	temp = ft_split(argv[1], 32);
	while (temp[i])
	{
		ft_stack_back(&a, ft_stack_new(ft_atoi_check(temp[i])));
		i++;
	}
	free_split(temp);
	return (a);
}

/**
 * @brief La función maneja dos casos:
 * Si solo hay un argumento (además del nombre del programa),
 * llama a `ft_stacksub(argv)`, que presumiblemente procesa una cadena 
 * con múltiples valores.
 * Si hay múltiples argumentos, los convierte en enteros usando ft_atoi_check()
 * y los añade a la pila mediante `ft_stack_back()`
 * 
 * @param argc el numero de argumentos que se pasa al programa.
 * @param argv Array de cadenas de caracteres que representan 
 * los valores a almacenar en la pila.
 * @return t_stack* un puntero a la pila creada (stack).
 */
t_stack	*ft_stack_add(int argc, char **argv)
{
	t_stack	*temp;
	int		i;

	temp = NULL;
	i = 1;
	if (argc == 2)
		temp = ft_stacksub(argv);
	else
	{
		while (i < argc)
		{
			ft_stack_back(&temp, ft_stack_new(ft_atoi_check(argv[i])));
			i++;
		}
	}
	return (temp);
}
