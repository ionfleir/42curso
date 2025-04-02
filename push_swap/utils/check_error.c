/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:18:44 by aburga-g          #+#    #+#             */
/*   Updated: 2025/04/02 13:46:06 by aburga-g         ###   ########.fr       */
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

}