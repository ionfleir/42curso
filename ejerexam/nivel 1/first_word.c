#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
		i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	char	c[] =  " hola como ";

	first_word(c);
	return (0); 
}