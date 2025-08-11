#include <unistd.h>

void	paramsum(int num)
{
	char	n;

	if (num > 9)
		paramsum(num / 10);
	n = (num % 10) + '0';
	write(1, &n, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;
	paramsum(argc - 1);
	write(1, "\n", 1);
	return (0);
}