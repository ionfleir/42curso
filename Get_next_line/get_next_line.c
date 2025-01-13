/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:46:25 by aburga-g          #+#    #+#             */
/*   Updated: 2025/01/13 08:55:38 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * @brief ft_free: esta funcion concatena cadenas y libera memoria previamente
 * dada.
 * 1 recibe dos cadenas (buffer) y (buf).
 * 2 utiliza ft_strjoin para concatenara estas dos cadenas asignando el
 *   resultado en (buffer2).
 * 3 libera memoria de "buffer".
 * 4 devuelve la nueva cadena resultante "buffer2".
 * 
 * @param buffer puntero a una cadena que sera liberada tras la concatenacion.
 * @param buf puntero que se utilizara para concatenar con "buffer"
 * @return char* devuelve un puntero "buffer2" de la concatencion de 
 * "buffer y buf"
 */
char	*ft_free(char *buffer, char *buf)
{
	char	*buffer2;

	buffer2 = ft_strjoin(buffer, buf);
	free(buffer);
	return (buffer2);
}

/**
 * @brief buffer_rest extrae la parte restande del buffer apartir de una posicion
 * especifica.
 * Esta funcion busca el primer caracter de nueva linea ('\n') y si lo encuentra 
 * devuelve un nuevo "buffer" con todo el contenido restante despues del salto de
 * linea, de lo contrario libera buffer y devuelve "NULL".
 * 
 * Utiliza ft_calloc para establecer memoria si encuentra el salto de linea,
 * uliliza un puntero "temp" para almacenar dicha memoria.
 * 
 * mientras que buffer sea distinto del final de la cadena se actualizara el
 * puntero "temp" con el restante de "buffer", se libera memoria a "buffer"
 * una vez copiado, y se devuelve "temp".
 * 
 * @param buffer puntero a la cadena de caracter original
 * @return char* devuelve un nuevo puntero a la cadena restante despues del
 * salto de linea o nulo si no hay salto de linea.
 */

char	*buffer_rest(char *buffer)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	if (buffer[i] == '\0')
	{
		free(buffer);
		return (NULL);
	}
	temp = ft_calloc(ft_strlen(buffer) - i + 1, sizeof(char));
	i++;
	while (buffer[i] != '\0')
	{
		temp[j] = buffer[i];
		i++;
		j++;
	}
	free(buffer);
	return (temp);
}

/**
 * @brief buffer_copy copia una liena del buffer dado hasta encontrar un
 * salto de linea '\n' o el final de la cade '\0'.
 * 
 * la funcion recorre buffer desde el inicio y copia su contenido hasta
 * encontrar el primer saldo de linea (\n) o el final de la cadena (\0).
 * si encuentra un salto de liena, lo incluye en la copia.
 * 
 * @param buffer puntero a la cadena de caracter origial.
 * @return char* un puntero a una nueva cadena que contiene la nueva linea
 * copiada o nulo si el buffer esta vacio.
 */
static char	*buffer_copy(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	line = 0;
	if (buffer[i] == '\0')
		return (0);
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	if (buffer[i] == '\n')
		line = ft_calloc((i + 2), sizeof(char));
	else
		line = ft_calloc((i + 1), sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i] = '\n';
	return (line);
}

/**
 * @brief read_file se encarga de leer datos de un archivo y lo concatena en un
 * buffer hazta encontrar un salto de line o el final del archivo.
 * 
 * esta funcion lee datos de un archivo dado por su descriptor de archivos (fd)
 * y concatena esos datos en un buffer proporcionado. La lectura contunia hazta
 * encontrar un salto de liena (\n) o llegar al final del archivo.
 * 
 * -si el buffer es NULL se inicializa.
 * -la funcion utiliza un buffer temporal 'temp' para almacenar lo leido y
 *  concatener con el buffer origual.
 * -si ocurre un error, se libera memori y se devuelve NULL.
 * -la lectura contunia hazta encontrar un salto de linea '\n'.
 * 
 * @param buffer puntero a la cadena de caracteres donde se almacena lo leido.
 * @param fd el descripor de archivos del cual se leera los datos.
 * @return el nuevo buffer que contiene los nuevos datos o NULL si ocurre un
 * erros.
 */
static char	*read_file(char *buffer, int fd)
{
	char	*temp;
	int		i;

	if (!buffer)
		buffer = ft_calloc(1, 1);
	temp = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	i = 1;
	while (i > 0)
	{
		i = read(fd, temp, BUFFER_SIZE);
		if (i == -1)
		{
			free(temp);
			free(buffer);
			return (NULL);
		}
		temp[i] = '\0';
		buffer = ft_free(buffer, temp);
		if (ft_strchr(temp, '\n'))
			break ;
	}
	free(temp);
	return (buffer);
}

/**
 * @brief lee la siguente linea de un archivo y lo retorna
 * 
 * esta funcion lee datos de un archivo identificado por un
 * descriptor de archivos 'fd', lee y copia la una liena entera
 * hazta encontrar un salto de liena '\n', utiliza un buffer
 * statico el cual conserve la posicion donde se queda, para
 * continiar las siguentes llamadas de get next line. 
 * 
 * compuerba si fd es menor a cero o el BUFFER_SIZE es menor igual a cero
 * si es asi libera menoria de buffer y lo iguala a null, retorna null.
 * 
 * utiliza buffer para almacenar los datos leidos por fd y para poder continuar
 * las lecturas en las siguientes llamadas, si buffer es cero, quiere decir que
 * hay un error o que ya no has nada que leer en el archivo, si ocurre esto
 * libera memoria de buffer y retorna null.
 * 
 * utiliza line para almacenar los datos leido y copiados por la funcion 
 * buffer_copy hazta el salto de linea y el salto de liena.
 * 
 * utiliza la funcion buffer_rest para actualizar buffer y continuar la lectura
 * dede el punto donde se quedo para la siguente llamada de get next line.
 * 
 * @param fd para identificar los datos de un archivo.
 * @return Un puntero a la siguiente línea leída del archivo, o NULL en caso de 
 * error o si se alcanza el final del archivo.
 */
char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	buffer = read_file(buffer, fd);
	if (buffer == 0)
	{
		free(buffer);
		return (NULL);
	}
	line = buffer_copy(buffer);
	buffer = buffer_rest(buffer);
	return (line);
}

/*#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	i = 1;
	fd = open("test1.txt", O_RDONLY);
	while (i > 0)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		printf("%s", line);
		free (line);
	}
	close(fd);
	return (0);
}*/
