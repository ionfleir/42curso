#include <unistd.h>

int	ft_atoi(char *str)
{
	int	resul = 2;

	while (*str >= '0' && *str <= '9')
	{
		resul = (resul * 10) + (*str - '0');
		str++;
	}
	return (resul);
}

void	ft_putnbr(int num)
{
	char	n;

	if (num > 9)
		ft_putnbr(num / 10);
	n = (num % 10) + '0';
	write (1, &n, 1);
}

int	is_prime(int num)
{
	int	i = 2;

	if (num < 2)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	total = 0;
	int	nbr = 0;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		while (nbr > 0)
		{
			if (is_prime(nbr))
				total += nbr;
			nbr--;
		}
		ft_putnbr(total);
		write(1, "\n", 1);
	}
	else
		write (1, "0\n", 2);
	return (0);
}