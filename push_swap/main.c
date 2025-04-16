#include "inc/push_swap.h"

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc < 2)
		exit(0);
	a = ft_stack_add(argc, argv);
	if (!a || ft_duplicheck(a))
	{
		free_stack(&a);
		ft_error();
	}
	print_stack(a);
	free_stack(&a);
	return (0);
}
