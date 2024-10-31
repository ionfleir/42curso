#include <unistd.h>
#include <string.h>

void	rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			str[i] += 13;
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		rot_13(argv[1]);
	else
		write (1, "\n", 1);
	return(0);
}

/*int	main(void)
{
	char	c[] = "NOP";

	rot_13(c);
	return (0);
}*/
