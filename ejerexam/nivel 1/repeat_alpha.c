#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int	i;
	int	n;
	int	j;

	n = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z') 
			n = str[i] - 'a' + 1 ;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			n = str[i] - 'A' + 1;
		j = 0;
		while(j < n)
		{
				ft_putchar(str[i]);
				j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}