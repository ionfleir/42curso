/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-13 11:29:08 by aburga-g          #+#    #+#             */
/*   Updated: 2024-05-13 11:29:08 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief toma un carácter 'c' y lo escribe en un archivo o dispositivo
 * indicado por el descriptor de archivo 'fd'.
 * 
 * @param c carácter que se va a escribir.
 * @param fd descriptor de archivo donde se va a escribir el carácter.
 */

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*int	main(void)
{
	char	c = 'A';

	ft_putchar_fd(c, 1);
	return (0);
}*/
