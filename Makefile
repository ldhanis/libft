SRC = ft_*.c
DOTO = *.o
NAME = libft.a
HEADER_LOC = ~
all: $(NAME)
$(NAME):
    gcc -Wall -Wextra -Werror -I$(HEADER_LOC) -c $(SRC)
    ar rc $(NAME) $(DOTO)
    ranlib $(NAME)
clean:
    /bin/rm -f $(DOTO)
fclean: clean
    /bin/rm -f $(NAME)
re: fclean all

