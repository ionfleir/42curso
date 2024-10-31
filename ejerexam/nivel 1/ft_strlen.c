#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	str[] = "hola";
	int		n;

	n = ft_strlen(str);
		printf ("%d, es la cadena\n", n);
	n = strlen(str);
		printf ("%d, es la cadena", n);
	return (0);
}