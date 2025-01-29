#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*temp;
	int		len = 0;
	int		i = 0;

	while (src[len])
		len++;
	temp = malloc((i + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (src[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

int	main(void)
{
	char	*orig = "hola mundo como estas";
	char	*copi = "hello Word";

	copi = strdup(orig);
	printf("esta es la copia de la funcion orginarl: %s\n", copi);

	copi = ft_strdup(orig);
	printf("esta es la nueva copia: %s", copi);
	free(copi);
	return (0);
}
