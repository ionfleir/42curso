/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:44:25 by aburga-g          #+#    #+#             */
/*   Updated: 2025/04/14 12:09:24 by aburga-g         ###   ########.fr       */
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
void	ft_free(t_list **node);
int		ft_atoi_check(const char *str);
int		ft_duplicheck(t_stack *a);
/*...freeall...*/
void	ft_error(void);

/*...Nodes initiation...*/
t_stack	*ft_stack_new(int content);
t_stack	*ft_stacklast(t_stack *stack);
void	ft_stack_back(t_stack **head, t_stack *new_nodo);
void	print_stack(t_stack *stack);
/*...Operations...*/
/*void	ft_sa(t_stack **a, int j);
void	ft_sb(t_stack **b, int j);*/
/*...Comands...*/

/*...Algoritmos...*/
#endif