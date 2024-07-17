/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:54:32 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/12 20:03:50 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

// check
/**
 * @brief verifica si el caracter es un alfanumerico.
 * 
 * @param c caracter a verificar.
 * @return int 1 si es alfanumerico, 0 si no lo es.
 */
int		ft_isalpha(int c);
/**
 * @brief verifica si el caracter es un digito.
 * 
 * @param c caracter a verificar.
 * @return int 1 si es digito, 0 si no lo es.
 */
int		ft_isalnum(int c);
/**
 * @brief verifica si el caracter es un ascii.
 * 
 * @param c caracter a verificar.
 * @return int 1 si es ascii, 0 si no lo es.
 */
int		ft_isascii(int c);
/**
 * @brief verifica si el caracter es un imprimible.
 * 
 * @param c caracter a verificar.
 * @return int 1 si es imprimible, 0 si no lo es.
 */
int		ft_isprint(int c);
/**
 * @brief verifica si el caracter es un digito.
 * 
 * @param c caracter a verificar.
 * @return int 1 si es digito, 0 si no lo es.
 */
int		ft_isdigit(int c);
/**
 * @brief convierte un caracter a mayuscula.
 * 
 * @param c caracter a verificar.
 * @return int 1 si es espacio, 0 si no lo es.
 */
int		ft_toupper(int c);
/**
 * @brief convierte un caracter a minuscula.
 * 
 * @param c caracter a verificar.
 * @return int 1 si es espacio, 0 si no lo es.
 */
int		ft_tolower(int c);

// string
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	*ft_strdup(const char *s1);

// memory
void	*ft_memset(void *str, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t count, size_t size);

/*-----Parte II-----*/

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/*-----STRUCT-----*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*------Bonus------*/

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif