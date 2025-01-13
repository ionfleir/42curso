/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:51:16 by aburga-g          #+#    #+#             */
/*   Updated: 2025/01/13 08:56:06 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_free(char *buffer, char *buf)
{
	char	*buffer2;

	buffer2 = ft_strjoin(buffer, buf);
	free(buffer);
	return (buffer2);
}

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
	line = ft_calloc((i + 2), sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n' && buffer[i])
		line[i] = '\n';
	return (line);
}

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

char	*get_next_line(int fd)
{
	static char	*buffer[__FD_SETSIZE];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = read_file(buffer[fd], fd);
	if (buffer[fd] == 0)
		return (NULL);
	line = buffer_copy(buffer[fd]);
	buffer[fd] = buffer_rest(buffer[fd]);
	return (line);
}

/*int	main(void)
{
	char	*line;
	int	fd1 = open("test1.txt", O_RDONLY);
	int	fd2 = open("test2.txt", O_RDONLY);

	while ((line = get_next_line(fd1)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	printf("\n\n");
	while ((line = get_next_line(fd2)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd1);
	close(fd2);
	return (0);
}*/
