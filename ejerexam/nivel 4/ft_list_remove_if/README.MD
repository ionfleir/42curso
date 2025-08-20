Assignment name : ft_list_remove_if
Expected files : ft_list_remove_if.c
Allowed functions: free

Escribe una función llamada ft_list_remove_if que elimine de la
lista pasada cualquier elemento cuyos datos sean "iguales" a los datos de referencia.

Será declarada de la siguiente forma:

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());


cmp recibe dos void* y devuelve 0 cuando ambos parámetros son iguales.

Tienes que usar el archivo ft_list.h, que contendrá:

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;