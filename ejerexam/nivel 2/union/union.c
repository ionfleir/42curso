#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	unsigned char	c;
	int				i;

	i = 0;
	while (s1[i])
	{
		if (!s1[i])
		{
			write(1, &s1, 1);
			s1 = 1;
		}
	}
	i = 0;
	while (s2[i])
	{
		if (!s2[i])
		{
			write(1, &s2, 1);
			s2 = 1;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

