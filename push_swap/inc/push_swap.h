/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:44:25 by aburga-g          #+#    #+#             */
/*   Updated: 2025/04/17 20:02:39 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

/*....STRUCT....*/

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

/*...Stack initiation...*/
t_stack	*ft_stack_add(int argc, char **argv);
t_stack	*ft_stacksub(char **argv);

/*...check and errors ...*/
void	ft_error(void);
int		ft_atoi_check(const char *str);
int		ft_duplicheck(t_stack *a);
int		ft_is_sorted(t_stack *a);

/*...order all...*/
void	ft_order(t_stack **a);
/*...free all...*/
void	free_stack(t_stack **node);
void	free_split(char **split);

/*...Nodes initiation...*/
t_stack	*ft_stack_new(int content);
t_stack	*ft_stacklast(t_stack *stack);
void	ft_stack_back(t_stack **head, t_stack *new_nodo);
void	print_stack(t_stack *stack);
/*...Operations...*/
void	ft_sa(t_stack **a, int print);
void	ft_sb(t_stack **b, int print);
void	ft_ss(t_stack **a, t_stack **b, int print);
void	ft_pa(t_stack **a, t_stack **b, int print);
void	ft_pb(t_stack **a, t_stack **b, int print);
void	ft_ra(t_stack **a, int print);
void	ft_rb(t_stack **b, int print);
void	ft_rr(t_stack **a, t_stack **b, int print);
void	ft_rra(t_stack **a, int print);
void	ft_rrb(t_stack **b, int print);
void	ft_rrr(t_stack **a, t_stack **b, int print);
/*...Comands...*/

/*...Algoritmos...*/
#endif