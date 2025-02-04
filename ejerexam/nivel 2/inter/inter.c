#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i = 0;
	int		j = 0;
	char	table[256];

	if (argc == 3)
	{
		while (argv[1][i] && argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				argv[1][i++] = argv[2][j++];
				write(1, &argv[1][i], 1);
			}
			i++;
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}