/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:44:50 by aburga-g          #+#    #+#             */
/*   Updated: 2024/05/28 12:43:53 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*int	main(void)
{
	t_list *lst = ft_lstnew(strdup("Hello"));
	ft_lstadd_back(&lst, ft_lstnew(strdup("World")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("This")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("is")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("a")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("test")));
	printf("Lista original:\n");
	ft_lstiter(lst, print_content);

	t_list *new_lst = ft_lstmap(lst, duplicate_content, delete_content);
	printf("\nLista mapeada:\n");
	ft_lstiter(new_lst, print_content);
	ft_lstclear(&lst, delete_content);
	ft_lstclear(&new_lst, delete_content);
	return (0);
}*/