#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i = 0;
	int		j = 0;
	char	table[256];

	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !table[(int)argv[2][j]])
				{
					table[(int)argv[2][j]] = 1;
					write(1, &argv[2][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*void	inter(char *s1, char *s2)
{
	int		j = 0;
	int		i = 0;
	char	table[256] = {};

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j] && !table[(int)s2[j]])
			{
				table[(int)s2[j]] = 1;
				write (1, &s2[j], 1);
			}
			j++;
		}
		i++;
	}
}
int	main(void)
{
	char	s1[] = "padinto";
	char	s2[] = "paqefwtdjetyiytjneytjoeyjnejeyj";

	inter(s1, s2);
	return (0);
}*/
