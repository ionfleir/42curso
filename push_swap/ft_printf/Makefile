NAME = libftprintf.a
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_putnbr_u.c ft_putptr.c

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRC:%.c=%.o)

#program
all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	gcc -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
PHONY : all clean fclean re