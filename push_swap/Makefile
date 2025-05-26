# Variables
NAME = push_swap

#--Compiler and flags--
CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -f

#--Directorios--

#--Archivos fuente y objetos--
SRC = main.c \
	  ft_stack_add.c \
	  utils/utils.c \
	  utils/ft_atoi_check.c \
	  utils/free.c \
	  utils/check_error.c \
	  utils/print_stack.c \
	  operation1.c \
	  operation2.c \
	  operation3.c \
	  ft_order_all.c

OBJ = $(SRC:.c=.o) # Archivos objeto de la carpeta src 

#--Librería y encabezados--
LIBFT = .
INCLUDE = -I./inc
#PRINT = ./ft_printf

all: $(NAME)
	@echo "Compilación completa."

#--Compilar el ejecutable--
$(NAME): $(OBJ)
	@make -C libft
	@mv libft/libft.a .
	@$(CC) $(CFLAGS) -o $@ $^ $(INCLUDE) -L$(LIBFT) -lft
	@echo "Compilación completa."

#--Clean y fclean--
clean: 
	@$(RM) $(OBJ)
	@make -C libft clean
	@echo "Archivos objetos eliminados."

fclean: clean
	@$(RM) $(NAME)
	@$(RM) libft.a

re: fclean all

.PHONY: all clean fclean re