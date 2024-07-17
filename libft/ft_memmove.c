/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-02 10:03:23 by aburga-g          #+#    #+#             */
/*   Updated: 2024-05-02 10:03:23 by aburga-g         ###   ########malaga    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief es similar a 'ft_memcpy', copia 'n' bytes desde un bloque de memoria
 * 'src' a otro 'dest', manejando de manera segura la superposiciones, si las
 * areas de memoria se superponen, copia los bytes desde el final hacia el 
 * principio para evitar la corrupcion de datos, si no se superponen utiliza 
 * ft_memcpy para realizar la copia de manera más eficiente.
 * 
 * @param dest puntero al bloque de memoria de destino.
 * @param src puntero al bloque de memoria de origen.
 * @param n el numero de bytes a copiar.
 * @return void* puntero 'dest' que ahora contiene los 'n' bytes copiados de 
 * 'src'.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/*int main()
{
	char str[] = "hello, world";
	ft_memmove(str + 7, str, 9);
	printf("despues de memmove: %s\n", str);
	return (0);
}*/