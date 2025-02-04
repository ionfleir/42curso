#include <stdio.h>

char	*ft_strrev(char *str)
{
	char	temp;
	int		i = 0;
	int		len = 0;

	while (str[len])
		len++;
	len--;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf ("antes de la convercion: %s\n", argv[1]);
		ft_strrev(argv[1]);
		printf ("despues de la convercion: %s", argv[1]);
	}
	return (0);
}
