#include <unistd.h>

void	fizzbuzz(int num)
{
	char	str[10] = "0123456789";

	if (num > 9)
		fizzbuzz(num / 10);
	write (1, &str[num % 10], 1);
}

int	main(void)
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			fizzbuzz(i);
		i++;
		write (1, "\n", 1);
	}
}
