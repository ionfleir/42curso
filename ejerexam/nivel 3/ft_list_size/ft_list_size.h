#ifndef FT_LIST_SIZE_H
# define FT_LIST_SIZE_H

#include <stddef.h>

typedef struct	s_list
{
	struct s_list	*next;  // Puntero al siguiente nodo
	void			*data;  // Puntero a los datos del nodo
}				t_list;

#endif