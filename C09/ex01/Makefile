

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes

SRC = $(SRCDIR)/ft_putchar.c \
		$(SRCDIR)/ft_swap.c \
		$(SRCDIR)/ft_putstr.c \
		$(SRCDIR)/ft_strlen.c \
		$(SRCDIR)/ft_strcmp.c

OBJ = $(SRC:.c=.o)

HEADER = $(INCDIR)/ft.h


NAME = libft.a



all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
