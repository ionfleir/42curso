#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	*arr;
	int	size;

	size = (start >= end) ? (start - end + 1) : (end - start + 1);
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = (start >= end) ? (end + i) : (end - i);
		i++;
	}
	return (arr);
}

int	main(void)
{
	int	*range = ft_rrange(1, 3);
	int	size = 3 - 1 + 1;
	int	i = 0;

	if (!range)
		return (1);
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}