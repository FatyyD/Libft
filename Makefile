NAME=libft.a
CC=gcc
CFLAGS= -Wall -Wextra -Werror
SRC= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c \ 
OBJ= $(SRC:.c=.o)


all: $(NAME)

$NAME : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	 
%.o : %.c
	$(CC) -o $@ -c $<

clean :
	rm -rf *.o

fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
