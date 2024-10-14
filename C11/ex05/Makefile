

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes

SRC = $(SRCDIR)/aff.c \
		$(SRCDIR)/main.c \
		$(SRCDIR)/math.c \

OBJ = $(SRC:.c=.o)
EXEC = do-op
HEADER = $(INCDIR)/myHeader.h


NAME = libft.a

LFLAGS = -L. $(NAME) -o $(EXEC)


all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)
	gcc $(OBJ) $(LFLAGS) $@
	rm libft.a

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
