#include <unistd.h>

int	ft_atoi(char *str)
{
	int	num = 0;

	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

void	print_hex(int num)
{
	char	*hex = "0123456789abcdef";

	if (num >= 16)
		print_hex(num / 16);
	num = hex[num % 16];
	write(1, &num, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}