/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:44:25 by aburga-g          #+#    #+#             */
/*   Updated: 2025/03/13 17:44:58 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

/*....STRUCT....*/

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;


/*...Stack initiation...*/
t_stack_node	*ft_stack_add(int argc, char **argv);

/*...Handle errors...*/
/*...Nodes initiation...*/
t_stack_node	*ft_stack_new(void *date)
/*...Operations...*/

/*...Comands...*/

/*...Algoritmos...*/
#endif