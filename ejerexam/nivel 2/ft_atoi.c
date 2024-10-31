#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	resul;

	i = 0;
	neg = 1;
	resul = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resul = (str[i] - '0') + (resul * 10);
		i++;
	}
	return (resul * neg);
}

int	main(void)
{
	char	s1[] = "1234";
	char	s2[] = "5678";
	int		n;
	int		resul;

	n = atoi(s1);
	printf("%d el numero original\n\n", n);
	n = ft_atoi(s1);
	printf ("%d es el nuevo numero\n\n", n);
	n = atoi(s2);
	resul = n + 10;
	printf ("%d\n\n", resul);
	n = ft_atoi(s2);
	resul = n + 10;
	printf ("%d\n", resul);
	return (0);
}