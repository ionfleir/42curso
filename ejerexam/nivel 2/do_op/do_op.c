#include <stdlib.h>
#include <stdio.h>

void	do_op(char *num1, char *sig, char *num2)
{
	if (*sig == '+')
		printf("%d", atoi(num1) + atoi(num2));
	if (*sig == '-')
		printf("%d", atoi(num1) + atoi(num2));
	if (*sig == '*')
		printf("%d", atoi(num1) + atoi(num2));
	if (*sig == '/')
		printf("%d", atoi(num1) + atoi(num2));
	if (*sig == '%')
		printf("%d", atoi(num1) + atoi(num2));
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	printf("\n");
	return (0);
}
