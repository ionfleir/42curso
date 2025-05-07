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
	  utils/check_error.c

OBJ = $(SRC:.c=.o)
DEPS = $(OBJ:.o=.d)

#--Librería y encabezados--
LIBFT = ./libft
INCLUDE = I ./inc
PRINT = ./ft_printf

all: $(NAME)

#--Compilar el ejecutable--
$(NAME): $(OBJ)
	@make -C libft
	@mv libft/libft.a .
	@$(CC) $(CFLAGS) -o $@ $^ $(INCLUDE) -L$(LIBFT) -lft
	@echo "Compilación completa."

#--Regla para compilar archivos .c en .o, creando carpetas necesarias--

#--Incluir dependencias para recompilación automática--

#--Clean y fclean--
clean: 
	@$(RM) $(OBJ) $(DEPS)



fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
