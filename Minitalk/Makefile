#-------Targes-------
NAME_CLIENT = client
NAME_SERVER = server

#--Compiler and flags--
CFLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -f

#--Source and object files--
SRC_CLIENT = client.c \
			 utiles/ft_atoi.c
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

SRC_SERVER = server.c
OBJ_SERVER = $(SRC_SERVER:.c=.o)

#---Header file---
PRINT = ./ft_printf
INCLUDE = -I /include

# -----all program-----
all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(OBJ_CLIENT)
	@make -C ft_printf
	@mv ft_printf/libftprintf.a .
	$(CC) $(CFLAGS) $(OBJ_CLIENT) libftprintf.a -o $(NAME_CLIENT)

$(NAME_SERVER): $(OBJ_SERVER)
	@make -C ft_printf
	@mv ft_printf/libftprintf.a .
	$(CC) $(CFLAGS) $(OBJ_SERVER) -o $(NAME_SERVER) libftprintf.a

%.o : %.c $(INCLUDE)
	$(CC) -c $(CFLAGS) $< -o $@

#--Clean object files--
clean_ft_printf:
	@make -s -C $(PRINT) clean

clean: clean_ft_printf
	$(RM) $(OBJ_CLIENT) $(OBJ_SERVER)

fclean_ft_printf:
	@make -s -C $(PRINT) fclean

fclean: fclean_ft_printf clean
	$(RM) $(NAME_CLIENT) $(NAME_SERVER) libftprintf.a

re: fclean all

.PHONY: all clean fclean re