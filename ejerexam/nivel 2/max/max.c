#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int				resul;

	i = 0;
	if (len == 0)
		return (0);
	resul = tab[i];
	while (i < len)
	{
		if (resul < tab[i])
			resul = tab[i];
		i++;
	}
	return (resul);
}

int	main()
{
	int	array[] = {6, 3, 2, 10, 4};

	printf("El numero mas grande es: %d\n", max(array, 5));
	return (0);
}
