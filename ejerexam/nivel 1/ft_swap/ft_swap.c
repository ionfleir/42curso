#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	i = 1;
	int	e = 3;

	ft_swap(&i, &e);
	printf("cambio: el i = %d, la e = %d", i, e);
	return (0);
}
