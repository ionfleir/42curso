#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "hola";

	ft_putstr(str);
	return (0);
}

/*int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			write (1, &argv[1][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}*/
