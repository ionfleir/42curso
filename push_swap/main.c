#include "inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a; // Declaramos una varaible con puntero "a" pila (t_stack)

	if (argc < 2) // verificamos que nos den mas de 2 argumentos.
		exit(0); // si no termina el programa
	a = ft_stack_add(argc, argv); // Creamos la pila a con los valores pasados
	if (!a || ft_duplicheck(a)) // verficamos si exite la pila a y si no hay duplicados
	{
		free_stack(&a); // liberamos todos los stacks
		ft_error(); // imprimimos si "error" si no existe "a" o si hay duplicados.
	}
	if (!ft_is_sorted(a))
	 // verificamos si esta ordenado en forma acendente.
		ft_order(&a);
	print_stack(a);
	free_stack(&a);
	return (0);
}