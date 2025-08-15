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

void	ft_putnbr(int i)
{
	if (i > 9)
		ft_putnbr(i / 10);
	i = (i % 10) + '0';
	write(1, &i, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	n = ft_atoi(argv[1]);
		int	i = 1;

		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}