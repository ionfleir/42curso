#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return	(i);
}

int	main(void)
{
	char	str[] = "hola, como estas";
	int		n;

	n = ft_strlen(str);
	printf ("La longitud es:%d", n);
	return (0);
}
