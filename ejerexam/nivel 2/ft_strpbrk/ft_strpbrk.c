#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	int	j;

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char	*resul = ft_strpbrk(argv[1], argv[2]);
		if (resul)
			printf("Se ha encontrado %c en \"%s\"\n", *resul, resul);
		else
			printf("no se ha encontrado ningun caractar");
	}
	if (argc != 3)
		printf ("<Uso>: <cadena1> <cadena2>%s",argv[0]);
	return (0);
}

