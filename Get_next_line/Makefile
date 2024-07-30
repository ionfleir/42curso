CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = get_next_line.c main.c
OBJ = $(SRC:.c=.o)
TARGET = gnl

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re