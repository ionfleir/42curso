#include <unistd.h>

void	frist_word(char *str)
{
	int	i;

	i = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
	{
		write (1, &str[i], 1);
		i++;
	}
}
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		frist_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

