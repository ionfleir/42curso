/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:38:16 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/12 19:29:38 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

/**
 * @brief funcion que recibe un string y una lista de argumentos 
 * y retorna la cantidad de caracteres impresos.
 * 
 * @param txt string a imprimir.
 * @param ... lista de argumentos.
 * @return int retorna la cantidad de caracteres impresos.
 */
int	ft_printf(const char *txt, ...);

/*funciones a utilizar*/

/**
 * @brief funcion que imprime un caracter.
 * 
 * @param c caracter a imprimir.
 * @return int retorna 1 si se imprime correctamente.
 */
int	ft_putchar(int c);
/**
 * @brief funcion que imprime una cadena de caracteres.
 * 
 * @param s cadena de caracteres a imprimir.
 * @return int retorna la cantidad de caracteres impresos.
 */
int	ft_putstr(char *s);
/**
 * @brief funcion que imprime un numero entero.
 * 
 * @param num numero entero a imprimir.
 * @return int retorna la cantidad de caracteres impresos.
 */
int	ft_putnbr(int num);
/**
 * @brief funcion que imprime un numero entero sin signo.
 * 
 * @param num numero entero sin signo a imprimir.
 * @return int retorna la cantidad de caracteres impresos.
 */
int	ft_putnbr_u(unsigned int num);
/**
 * @brief funcion que imprime un numero en hexadecimal.
 * 
 * @param n numero a imprimir.
 * @param c caracter que se desea imprimir.
 * @return int retorna la cantidad de caracteres impresos.
 */
int	ft_puthex(unsigned long n, char c);
/**
 * @brief funcion que imprime un puntero.
 * 
 * @param c puntero a imprimir.
 * @return int retorna la cantidad de caracteres impresos.
 */
int	ft_putptr(void *c);

#endif