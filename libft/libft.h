/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:54:32 by aburga-g          #+#    #+#             */
/*   Updated: 2024/07/30 11:48:55 by aburga-g         ###   ########.fr       */
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
 * @brief comprueba si el carácter determinado es un carácter alfabétido.
 * 
 * @param c el caracter a determinar.
 * @return int si el carácter es un carácter alfabético de vuelve "1"
 * de lo contrario cero.
 */
int		ft_isalpha(int c);
/**
 * @brief comprueba si el carácter determinado es un carácter alfabético 
 * mayuscula o minuscula o un dígito.
 * 
 * @param c caracter a comprobar.
 * @return int si el carácter es un carácter alfabético o un digíto de vuelve 1
 * de lo contrario devuelve cero.
 */
int		ft_isalnum(int c);
/**
 * @brief comprueba si el carácter determinado está dentro del rango ASCII.
 * 
 * @param c el carácter a comprobar.
 * @return int si el carácter esta dentro del rango ASCII del 0 al 127,
 * devuelve 1 de lo contrario devuelve 0
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
 * @return c caracter convertido.
 */
int		ft_toupper(int c);
/**
 * @brief convierte un caracter a minuscula.
 * 
 * @param c caracter a verificar.
 * @return c caracter convertido.
 */
int		ft_tolower(int c);

// string
/**
 * @brief calcula la longitud de una cadena.
 * 
 * @param str cadena a calcular.
 * @return size_t longitud de la cadena.
 */
size_t	ft_strlen(const char *str);
/**
 * @brief Compara los primeros n bytes de las cadenas s1 y s2.
 * 
 * @param s1 cadena a comparar.
 * @param s2 cadena a comparar.
 * @param n número de bytes a comparar.
 * @return int 0 si las cadenas son iguales, un número positivo 
 * si s1 es mayor que s2 y un número negativo si s1 es menor que s2.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * @brief convierte una cadena de caracteres de tipo char que representa un
 * numero, en una variable entera de tipo "int".
 * 
 * @param str un puntero a la cadena que se va convertir.
 * @return int el numero convertido.
 */
int		ft_atoi(const char *str);
/**
 * @brief copia la cadena de origen en la cadena de destino.
 * 
 * @param dest cadena de destino.
 * @param src cadena de origen.
 * @param n tamaño de la cadena de destino.
 * @return size_t devuelve el tamaño de la cadena de origen.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
/**
 * @brief concatena la cadena de origen en la cadena de destino.
 * 
 * @param dest cadena de destino.
 * @param src cadena de origen.
 * @param n tamaño de la cadena de destino.
 * @return size_t devuelve el tamaño de la cadena de destino.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t n);
/**
 * @brief busca la primera ocurrencia del carácter c en la cadena s.
 * 
 * @param s cadena a buscar.
 * @param c caracter a buscar.
 * @return char* devuelve un puntero a la primera ocurrencia del carácter c
 * en la cadena s, si no se encuentra devuelve NULL.
 */
char	*ft_strchr(const char *s, int c);
/**
 * @brief busca la última ocurrencia del carácter c en la cadena s.
 * 
 * @param s cadena a buscar.
 * @param c caracter a buscar.
 * @return char* devuelve un puntero a la última ocurrencia del carácter c
 * en la cadena s, si no se encuentra devuelve NULL.
 */
char	*ft_strrchr(const char *s, int c);
/**
 * @brief Busca la primera aparición de la subcadena needle en la cadena haystack
 * donde no se buscan más de n caracteres.
 * 
 * @param haystack cadena en la que se busca.
 * @param needle subcadena a buscar.
 * @param n número máximo de caracteres a buscar.
 * @return char* un puntero al comienzo de la subcadena needle 
 * en la cadena haystack o NULL si no se encuentra la subcadena.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
/**
 * @brief Reserva memoria con malloc y copia la cadena s1 en
 * la memoria reservada.
 * 
 * @param s1 cadena a copiar.
 * @return char* puntero a la cadena copiada.
 */
char	*ft_strdup(const char *s1);

// memory
/**
 * @brief llena un bloque de memoria con una valor específico.
 * 
 * @param b puntero al bloque de memoria que se va a llenar.
 * @param c el valor a establecer.
 * @param n numero de bytes que se establecerán.
 * @return void* un puntero al bloque de memoria una vez que se ha llenado.
 */
void	*ft_memset(void *str, int c, size_t len);
/**
 * @brief rellena con ceros los primeros n bytes de la memoria apuntada por s.
 * 
 * @param s puntero a la memoria a rellenar.
 * @param n número de bytes a rellenar.
 */
void	ft_bzero(void *s, size_t n);
/**
 * @brief copia 'n' bytes desde un bloque de memoria 'src' a otro 'dest' si 
 * 'dest' y 'src' se supermonen o si alguno de ellos es 'NULL', no se realiza 
 * la copia.
 * 
 * @param dest puntero al bloque de memoria destino.
 * @param src puntero al bloque de memoria origen.
 * @param n el numero de bytes a copiar.
 * @return void* un puntero 'dest' que ahora contiene los 'n' bytes copiados 
 * de 'src'.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);
/**
 * @brief es similar a 'ft_memcpy', copia 'n' bytes desde un bloque de memoria
 * 'src' a otro 'dest', manejando de manera segura la superposiciones, si las
 * areas de memoria se superponen, copia los bytes desde el final hacia el 
 * principio para evitar la corrupcion de datos, si no se superponen utiliza 
 * ft_memcpy para realizar la copia de manera más eficiente.
 * 
 * @param dest puntero al bloque de memoria de destino.
 * @param src puntero al bloque de memoria de origen.
 * @param n el numero de bytes a copiar.
 * @return void* puntero 'dest' que ahora contiene los 'n' bytes copiados de 
 * 'src'.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);
/**
 * @brief busca la primera aparción de un carácter específico en un bloque
 *  de memoria, recorriendo los primeros 'n' bytes del bloque apuntado por
 * 's'.
 * @param s puntero al bloque de memoria.
 * @param c el caracter a buscar.
 * @param n el numero de bytes que se van a examinar.
 * @return void* un puntero a la primera aparición del carácter o NULL si no se
 * encuentra.
 */
void	*ft_memchr(const void *s, int c, size_t n);
/**
 * @brief compara los primeros 'n' bytes de dos bloques de memoria.
 * 
 * @param s1 puntero constante al primer bloque de memoria.
 * @param s2 puntero constante al segundo bloque de memoria.
 * @param n numero de bytes que se van a comparar.
 * @return int valor entero que indica la diferencia de la comparación
 * indicando cuál bloque es mayor. 
 * o '0' si las areas de memoria con iguales.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * @brief asigna e inicializa memoria para una matriz de elementos.
 * 
 * @param count el numero de elementos asignar.
 * @param size el tamaño de cada elemento.
 * @return void* si la asignacion de memoria se realiza correctamente 
 * se de velve un puntero al boque de memoria asignado.
 * de lo contrario si "size" es cero o falla la asignacion de memoria,
 * se devuelve NULL.
 */
void	*ft_calloc(size_t count, size_t size);

/*-----Parte II-----*/
/**
 * @brief Reserva memoria para una subcadena de la cadena dada.
 * 
 * @param s cadena de la que se extraerá la subcadena.
 * @param start posición inicial de la subcadena.
 * @param len longitud de la subcadena.
 * @return char* la subcadena extraida.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * @brief Crea una cadena formada por s1 y s2, la cadena resultante 
 * solo se crea si s1 y s2 no son Null o si la accinacion de memoria 
 * ah sido correcta.
 * 
 * @param s1 cadena de caracteres a concatenar.
 * @param s2 cadena de caracteres a concatenar.
 * @return char* la nueva cadena de caracteres.
 */
char	*ft_strjoin(char const *s1, char const *s2);
/**
 * @brief Reserva memoria y devuelve una copia de la cadena 's1' sin los
 * caracteres que se encuentran en la cadena 'set' al principio y al final
 * de la cadena 's1'.
 * 
 * @param s1 cadena a trimmear.
 * @param set cadena de caracteres a eliminar.
 * @return char* puntero a la cadena trimmeada.
 */
char	*ft_strtrim(char const *s1, char const *set);
/**
 * @brief divide la cadena 's' en una matriz de palabras usando un 
 * delimitador 'c', utiliza varias funciones auxiliares para contar
 * las palabras, obtener la longitud de una palabra y manejar la memoria.
 * 
 * @param s puntero a la cadena que se va a dividir.
 * @param c el caracter delimitardor utilizado para dividir la cadena.
 * @return char** una matiz de cadenas asignadas dinamicamente que repesenta
 * las subcadenas divididas.
 * El último elemento de la matriz se establece en NULL.
 * NULL si falla la asginacion de memoria o 's' es NULL.
 */
char	**ft_split(char const *s, char c);
/**
 * @brief convierte el numero entero (int) en una cadena de caracteres (char *)
 * 
 * @param n el numero entero que se va a convertir 
 * @return char* es la cadena asignada dinamicamente que representa el numero 
 * entero convertido.
 * se devuelve NULL si falla la asignacíon de memoria.
 */
char	*ft_itoa(int n);
/**
 * @brief aplica la función 'f' a cada caracter de la cadena 's' para crear
 * una nueva cadena con 'malloc' que resulta de las aplicaciones sucesivas
 * de 'f'.
 * 
 * @param s cadena a iterar.
 * @param f función a aplicar.
 * @return char* la cadena resultante de las aplicaciones sucesivas de 'f'.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * @brief aplica la función 'f' a cada caracter de la cadena 's'.
 * 
 * @param s cadena a iterar.
 * @param f función a aplicar.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/**
 * @brief toma un carácter 'c' y lo escribe en un archivo o dispositivo
 * indicado por el descriptor de archivo 'fd'.
 * 
 * @param c carácter que se va a escribir.
 * @param fd descriptor de archivo donde se va a escribir el carácter.
 */
void	ft_putchar_fd(char c, int fd);
/**
 * @brief toma una cadena 's' y la escribe en el archivo o dispositivo
 * indicado por el descriptor de archivo 'fd', siempre que 's' no sea 'NULL'.
 * 
 * @param s puntero a la cadena de caracteres que se va a escribir.
 * @param fd el descriptor de archivos donde se va a escribir la cadena
 */
void	ft_putstr_fd(char *s, int fd);
/**
 * @brief toma una cadena 's' y la escribe en el archivo o dispositivo indicado
 * por el descriptor de archivo 'fd', segida de un caracter de nueva linea
 * 
 * @param s puntero a la cadena de caracteres que se va a escribir.
 * @param fd el descriptor de archivo donde se va a escribir la cadena y el
 * carácter de una línea.
 */
void	ft_putendl_fd(char *s, int fd);
/**
 * @brief toma un numero entero 'n' y lo escribe en el archivo o dispositivo
 * indicado por el descriptor de archivo 'fd'. Maneje números negativos y el
 * valor mínimo de un entero con signo en C de manera especial.
 * 
 * @param n el numero entero que se va escribir.
 * @param fd el descriptor de archivo donde se va a escribir el numero.
 */
void	ft_putnbr_fd(int n, int fd);

/*-----STRUCT-----*/
/**
 * @brief Estructura de lista enlazada.
 * 
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*------Bonus------*/
/**
 * @brief crea un nuevo nodo para una lista enlazada
 * 
 * @param content el argumento es un puntero a "void", lo que permite 
 * que el contenido del nodo pueda ser de cualquier tipo. 
 * @return t_list* un puntero al elemento de lista recien creado(nodo).
 * Si falla la asignacion de memoria devuelve NULL.
 */
t_list	*ft_lstnew(void *content);
/**
 * @brief añade el elemento 'new' al principio de la lista.
 * 
 * @param lst puntero al puntero del primer elemento de la lista.
 * @param new puntero al elemento que se va a añadir.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);
/**
 * @brief devuelve el número de elementos en una lista.
 * 
 * @param lst puntero al primer elemento de la lista.
 * @return int el número de elementos en la lista.
 */
int		ft_lstsize(t_list *lst);
/**
 * @brief devuelve el último elemento de la lista.
 * 
 * @param lst puntero al primer elemento de la lista.
 * @return t_list* el último elemento de la lista.
 */
t_list	*ft_lstlast(t_list *lst);
/**
 * @brief añade el elemento 'new' al final de la lista.
 * 
 * @param lst puntero al puntero del primer elemento de la lista.
 * @param new puntero al elemento que se va a añadir.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);
/**
 * @brief elimina y libera la memoria del elemento 'lst' y de su contenido.
 * 
 * @param lst puntero al elemento que se va a borrar.
 * @param del puntero a la función que elimina el contenido del elemento.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/**
 * @brief elimina y libera la memoria de todos los elementos de la lista.
 * 
 * @param lst puntero al primer elemento de la lista.
 * @param del puntero a la función que elimina el contenido del elemento.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));
/**
 * @brief aplica la función 'f' al contenido de cada elemento de la lista.
 * 
 * @param lst puntero al primer elemento de la lista.
 * @param f puntero a la función que se va a aplicar.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));
/**
 * @brief crea una nueva lista que resulta de la aplicación de la función 'f'
 * al contenido de cada elemento de la lista.
 * 
 * @param lst puntero al primer elemento de la lista.
 * @param f puntero a la función que se va a aplicar.
 * @param del puntero a la función que elimina el contenido del elemento.
 * @return t_list* la nueva lista.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif