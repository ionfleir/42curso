/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:07:17 by aburga-g          #+#    #+#             */
/*   Updated: 2024/05/23 19:09:01 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief asigna e inicializa memoria para una matriz de elementos.
 * 
 * @param count el numero de elementos asignar.
 * @param size el tamaño de cada elemento.
 * @return void* si la asignacion de memoria se realiza correctamente 
 * se de velve un puntero al boque de memoria asignado.
 * de lo contrario si "size" es cero o falla la asignacion de memoria,
 * se devuelve NULL.
 */
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
