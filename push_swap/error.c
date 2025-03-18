/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erro.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:18:44 by aburga-g          #+#    #+#             */
/*   Updated: 2025/03/18 16:24:13 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/**
 * @brief funcion para la salida estandar si ocurre un error
 * seguido de un salto de linea "\n".
 */
void	ft_error(void)
{
	write(1, "error\n", 5);
	exit(1);
}
