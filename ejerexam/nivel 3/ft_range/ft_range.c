#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	size;
	int	*range;
	int	i = 0;

	size = (start <= end) ? (end - start + 1) : (start - end + 1);
	range = (int *)malloc(sizeof(int ) * size);
	if(!range)
		return (NULL);
	while (i < size)
	{
		range[i] = (start <= end) ? (start + i) : (start - i);
		i++;
	}
	return (range);
}

int	main(void)
{
	int	*range = ft_range(1, 5);
	int	size = 5 - 1 + 1;
	int	i = 0;

	if (!range)
		return (1);
	while (i < size)
	{
		printf("rango : %d", range[i]);
		i++;
	}
	printf("\n");
	free;
	return (0);
}