#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	neg = 1;
	int	resul = 0;

	while (*str >= 9 && *str <= 13 || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resul = (*str - '0') + (resul * 10);
		str++;
	}
	return (resul * neg);
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		printf("funcion prueba: %d\n", n);
		n = atoi(argv[1]);
		printf("funcion original: %d", n);
		return (0);
	}
}
