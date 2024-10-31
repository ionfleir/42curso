#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *s1)
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	if (s1[j])
		j++;
	copy = malloc(sizeof(*copy) * (j + 1));
	if (!copy)
		return (NULL);
	while (i < j)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] != '\0';
	return (copy);
}

int	main(void)
{
	char	*orig = "hola, mmundo!";
	char	*cpy = "que tal como estas yo bien";

	cpy = ft_strdup(orig);
	if (cpy == NULL)
	{
		printf ("Error: no se puede copiar la cadena\n");
		return (EXIT_FAILURE);
	}
	printf ("copia la cadena: %s\n", cpy);
	free (cpy);
	return (0);
}