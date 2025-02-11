#include <stdio.h>

int	is_powor_of_2(unsigned int n)
{
	int	i = 1;

	while (i <= n)
	{
		if (i == n)
			return (1);
		i = i * 2;
	}
	return (0);
}

int	main(void)
{
	printf("%d", is_powor_of_2(-1));
	return (0);
}
