#include <unistd.h>

int	main(int argc, char **argv)
{
	char	table[256] = {};
	int		i = 0, j = 0;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!table[(int)argv[1][i]])
			{
				table[(int)argv[1][i]] = 1;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		while (argv[2][j])
		{
			if (!table[(int)argv[2][j]])
			{
				table[(int)argv[2][j]] = 1;
				write(1, &argv[2][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
