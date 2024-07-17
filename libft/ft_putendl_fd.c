/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-15 16:48:20 by aburga-g          #+#    #+#             */
/*   Updated: 2024-05-15 16:48:20 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief toma una cadena 's' y la escribe en el archivo o dispositivo indicado
 * por el descriptor de archivo 'fd', segida de un caracter de nueva linea
 * 
 * @param s puntero a la cadena de caracteres que se va a escribir.
 * @param fd el descriptor de archivo donde se va a escribir la cadena y el
 * carácter de una línea.
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*int main()
{
	char *str = "hola mmundo!";

	ft_putendl_fd(str, 1);
	return (0);
}*/