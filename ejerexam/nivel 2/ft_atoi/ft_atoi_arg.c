#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	neg = 1;
	int	resul = 0;

	while (argv[1][i] >= 9 && argv[1][i] <= 13 || argv[1][i] == 32)
		i++;
	if (argv[1][i] == '+' || argv[1][i] == '-')
	{
		if (argv[1][i] == '-')
			neg = -1;
		i++;
	}
	while (argv[1][i] >= '0' && argv[1][i] <= '9')
	{
		resul = (argv[1][i] - '0') + (resul * 10);
		i++;
	}
	printf("este es el resultado: %d", (resul * neg));
	return (0);
}
