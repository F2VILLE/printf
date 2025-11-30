CC = cc
CF = -Wall -Werror -Wextra
NAME = libftprintf.a
SRCS = ./ft_putnbr.c ./ft_printf.c ./ft_putstr.c ./ft_putchar.c ./ft_putnbr_base.c ./ft_putptr.c
OBJS = ${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $^

%.o: %.c
	$(CC) $(CF) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
