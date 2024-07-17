/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-13 11:48:09 by aburga-g          #+#    #+#             */
/*   Updated: 2024-05-13 11:48:09 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief toma una cadena 's' y la escribe en el archivo o dispositivo
 * indicado por el descriptor de archivo 'fd', siempre que 's' no sea 'NULL'.
 * 
 * @param s puntero a la cadena de caracteres que se va a escribir.
 * @param fd el descriptor de archivos donde se va a escribir la cadena
 */

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		write (fd, s, ft_strlen(s));
	}
}

/*int	main(void)
{
	char	*str = "hello, world";

	ft_putstr_fd(str, 1);
	return (0);
}*/
