# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 17:25:28 by fadiallo          #+#    #+#              #
#    Updated: 2022/02/10 17:36:23 by fadiallo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c \
	 ft_itoa.c \
	 ft_isalnum.c \
	 ft_isalpha.c \
	 ft_isascii.c \
	 ft_isdigit.c \
	 ft_isprint.c \
	 ft_memset.c \
	 ft_lstadd_back.c\
	 ft_lstadd_front \
	 ft_lstnew.c \
	 ft_lstsize.c \
	 ft_lstlast.c \
	 ft_memmove.c \
	 ft_memcpy.c \
	 ft_memcmp.c \
	 ft_memchr.c \
	 ft_putstr_fd.c \
	 ft_putchar_fd.c \
	 ft_putendl_fd.c \
	 ft_putnbr_fd.c \
	 ft_split.c \
	 ft_strchr.c \
	 ft_strdup.c \
	 ft_strjoin.c \
	 ft_strlcpy.c \
	 ft_strlcat.c \
	 ft_strlen.c \
	 ft_strrchr.c\
	 ft_strnstr.c\
	 ft_strmapi.c \
	 ft_strncmp.c \
	 ft_strtrim.c \
	 ft_substr.c \
	 ft_tolower.c \
	 ft_toupper.c \
	 ft_calloc.c \
	 ft_bzero.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	 
%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	rm -rf $(OBJ)

fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
