/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:48:09 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/30 11:34:35 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		write (fd, s, ft_strlen(s));
	}
}

/*int	main(void)
{
	char	*str = "hello, world";

	ft_putstr_fd(str, 1);
	return (0);
}*/
