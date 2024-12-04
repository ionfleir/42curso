#-------Targes-------
NAME_CLIENT = client
NAME_SERVER = server

#--Compiler and flags--
CFLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -f

#--Sorrce and object files--
SRC_CLIENT = client.c \
			 utiles/ft_atoi.c
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

SRC_SERVER = server.c
OBJ_SERVER = $(SRC_SERVER:.c=.o)

#---Header file---
INCLUDE = -I /include

# -----all program-----
all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(OBJ_CLIENT)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) -o $(NAME_CLIENT)

$(NAME_SERVER): $(OBJ_SERVER)
	$(CC) $(CFLAGS) $(OBJ_SERVER) -o $(NAME_SERVER)

%.o : %.c $(INCLUDE)
	$(CC) -c $(CFLAGS) $< -o $@

#--Clean object files--
clean:
	$(RM) $(OBJ_CLIENT) $(OBJ_SERVER)

fclean: clean
	$(RM) $(NAME_CLIENT) $(NAME_SERVER)

re: fclean all

.PHONY: all clean fclean re