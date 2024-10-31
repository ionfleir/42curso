#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && (str1[i] == str2[i]))
		i++;
	return (str1[i] - str2[i]);
}

int	main(void)
{
	char	s1[] = "c";
	char	s2[] = "a";
	int		resul;

	printf("%d, es el resultado \n\n", resul = ft_strcmp(s1, s2));
	printf("%d, es el resultado", resul = strcmp(s1, s2));
	return (0);
}
