#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			count = str[i] - 'a' + 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			count = str[i] - 'A' + 1;
		while (count--)
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		repeat_alpha(&argv[1][i]);
		write(1, &argv[1][i], 1);
	}
	write(1, "\n", 1);
	return (0);
}