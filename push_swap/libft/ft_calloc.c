/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:07:17 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/25 17:35:10 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;
	size_t	e;

	e = count * size;
	r = malloc(e);
	if (!r)
		return (NULL);
	ft_bzero(r, e);
	return (r);
}

/*int	main(void)
{
	int	size = 5;

	//Asignar memoria para un arreglo de 5 enteros e inicializarlo a cero
	int	*arr = (int *)ft_calloc(size, sizeof(int));

	if (arr == NULL)
	{
		printf("Error: No se pudo asignar memoria.\n");
		return (1);
	}
	//Imprimir los valores del arreglo, que estarán inicializados a cero
	printf("Valores del arreglo inicializado a cero: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//Liberar la memoria asignada
	free(arr);
	return (0);
}*/
