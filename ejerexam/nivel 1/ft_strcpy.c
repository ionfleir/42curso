#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (!s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] != '\0';
	return (0);
}

int	main(void)
{
	char	orig[] = "holacara";
	char	dest[10];

	strcpy(dest, orig);
		printf("la copia es: %s\n", dest);
	ft_strcpy(dest, orig);
		printf("la copia es: %s\n", dest);
	return (0);
}