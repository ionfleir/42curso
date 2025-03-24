/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:38:31 by aburga-g          #+#    #+#             */
/*   Updated: 2025/03/24 12:14:15 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief cuenta cuantas palabras hay en la cadena 's' separadas por el 
 * delimitador 'c'.
 * 
 * @param s puntero a la cadena que se va contar.
 * @param c caractar delimitador utilizador paro dividir la cadena.
 * @return size_t el numero total de palabras.
 */

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else if (*(s + i) == c)
			i++;
	}
	return (count);
}
/**
 * @brief obtiene la longitud de una palabra en la cadena 's' hasta
 * el delimitador 'c' o el final de la cadena.
 * 
 * @param s puntero constante a una cadena de caracteres.
 * @param c el carácter delimitador utilizado para separar palabras
 * en la cadena.
 * @return size_t devuelve el valor de 'i', que ahora contiene la
 * longitud de la palabra.
 */

static size_t	get_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}
/**
 * @brief libera la memoria asignada a la matriz de cadenas si ocurre 
 * un error durante el proceso de división.
 * 
 * @param i un contador que indica el numero de elementos que hay en
 * la matriz 'array' que se deben liberar.
 * @param array puntero a una matriz de cadenas.
 */

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
}
/**
 * @brief toma una cadena 's' y un delimitador 'c', y divide la cadena
 * en una matriz de palabras, almacenándolas en 'array'. El número de
 * palabras en la cadena esta dado por 'words_count'.
 * la funcion utiliza un par de bucles 'while' para encontrar y extraer
 * las palabras de la cadena 's'.
 * 
 * @param s puntero constante a una cadena de caracteres de entrada.
 * @param c carácter delimitador utilizado para separar palabras en
 * la cadena.
 * @param array puntero a una matriz de cadenas, que almacenará las
 * palabras extraídas.
 * @param words_count numero de palabras en la cadena 's'
 * @return char** la matriz de cadenas 'array' que contiene todas las
 * palabras extraídas de la cadena 's',
 * si ocurre un error en la asignacion de memoria, libera toda la memoria
 * y retorna 'NULL'.
 */

static char	**split(char const *s, char c, char **array, size_t words_count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words_count)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(array + i) = ft_substr(s, j, get_word_len(&*(s + j), c));
		if (!*(array + i))
		{
			free_array(i, array);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(array + i) = NULL;
	return (array);
}
/**
 * @brief divide la cadena 's' en una matriz de palabras usando un 
 * delimitador 'c', utiliza varias funciones auxiliares para contar
 * las palabras, obtener la longitud de una palabra y manejar la memoria.
 * 
 * @param s puntero a la cadena que se va a dividir.
 * @param c el caracter delimitardor utilizado para dividir la cadena.
 * @return char** una matiz de cadenas asignadas dinamicamente que repesenta
 * las subcadenas divididas.
 * El último elemento de la matriz se establece en NULL.
 * NULL si falla la asginacion de memoria o 's' es NULL.
 */

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = split(s, c, array, words);
	return (array);
}

/*int	main(void)
{
	char	**resul;
	size_t	i;
	char	str[] = "esto es un ejemplo de string";

	resul = ft_split (str,' ');
	if (!resul)
	{
		printf("Error: fallo en la asignacion de memoria\n");
		return (1);
	}
	i = 0;
	while (resul[i] != 0)
	{
		printf("Palabra %zu: %s\n", i + 1, resul[i]);
		free(resul[i]);
		i++;
	}
	free(resul);
	return (0);
}*/
