#include <unistd.h>
#include <string.h>

char *rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while(i > 0)
	{
		i--;
		write (1, &str[i], 1);
	}	
	return(str);
}

int	main(void)
{
	char	str[] = "hola";
	
	rev_print(str);
	return (0);
}