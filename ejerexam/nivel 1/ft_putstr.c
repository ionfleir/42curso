#include <unistd.h>

/*void	ft_putchar(char c)
{
	write (1, &c, 1);
}*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		/*ft_putchar(str[i]);*/
		write (1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "hola";

	ft_putstr(str);
	return (0);
}