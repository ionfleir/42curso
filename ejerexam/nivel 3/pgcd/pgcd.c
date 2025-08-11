#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int				s1 = atoi(argv[1]);
		int				s2 = atoi(argv[2]);
		unsigned int	i = s1;

		while (i > 0)
		{
			if (s1 % i == 0 && s2 % i == 0)
			{
				printf("%d\n", i);
				break ;
			}
			i--;
		}
		return (0);
	}
	printf("\n");
	return (0);
}