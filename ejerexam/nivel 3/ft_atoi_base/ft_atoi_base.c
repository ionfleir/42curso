#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	sig = 1;
	int	resul = 0;
	int	val;

	if (str[i] == '-')
	{
		sig = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			val = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			val = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
		 	val = str[i] - 'A' + 10;
		else
			break;
		if (val >= str_base)
			break;
		resul = resul * str_base + val;
		i++;
	}
	return (resul * sig);
}

int	main()
{
	int	n = ft_atoi_base("20", 4);
	printf("este es el resultado: %d", n);
	return (0);
}