/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:17:50 by aburga-g          #+#    #+#             */
/*   Updated: 2025/03/24 20:05:29 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/**
 * @brief cuenta el numero de elementos de una pila.
 * 
 * @param stack puntero a la pila que va contar
 * @return int numero de elementos de la pila.
 */
int	ft_stack_size(t_stack *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

/**
 * @brief añade el elemento 'new' al principio de la pila.
 * 
 * @param stack puntero al puntero del primer elemento de la pila.
 * @param ne puntero al elemento que se va a añadir.
 */
void	ft_stack_front(t_stack **stack, t_stack *new)
{
	if (!stack || !new)
		return ;
	new->next = *stack;
	*stack = new;
}

/**
 * @brief esta funcion recorre hazta el final de la pila.
 * 
 * @param stack : Puntero al primer elemeto de la pila
 * @return t_stack* : Devuelve el ultimo elemento de la pila
 */
t_stack	*ft_stacklast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

/**
 * @brief funcion que añade un nuevo nodo creado al final de la
 * pila.
 * 
 * @param head : Puntero al puntero del pimer elemento de la pila.
 * @param new_nodo : Puntero al nuevo nodo creado.
 */
void	ft_stack_back(t_stack **head, t_stack *new_nodo)
{
	t_stack	*temp;

	if (!head || !new_nodo)
		return ;
	if (!*head)
	{
		*head = new_nodo;
		return ;
	}
	temp = ft_stacklast(*head);
	temp->next = new_nodo;
}

/**
 * @brief funcion para crear un nuevo nodo de una lista enlazada;
 * 
 * @param content : puntero void al contenido que puede ser de cualquier tipo.
 * @return t_stack*: devuelve el puntero al nuevo nodo creado.
 */
t_stack	*ft_stack_new(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		ft_error();
	new->value = content;
	new->next = NULL;
	return (new);
}
