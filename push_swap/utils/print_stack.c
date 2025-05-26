/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:01:47 by aburga-g          #+#    #+#             */
/*   Updated: 2025/05/23 12:01:47 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"


/**
 * @brief funcion para imprimir los stacks
 * 
 * @param stack puntero al stack que se va imprimir.
 */
void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}