# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/30 19:03:50 by mrakhman          #+#    #+#              #
#    Updated: 2017/12/05 20:57:20 by mrakhman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCTIONS = \
ft_strlen \
ft_atoi \
ft_strcpy \
ft_strncpy \
ft_strstr \
ft_strcmp \
ft_strncmp \
ft_isalpha \
ft_strdup \
ft_isascii \
ft_isdigit \
ft_isalnum \
ft_isprint \
ft_toupper \
ft_tolower \
ft_strnstr \
ft_memset \
ft_bzero \
ft_memcpy \
ft_memccpy \
ft_memmove \
ft_memchr \
ft_memcmp \
ft_strcat \
ft_strncat \
ft_strlcat \
ft_strchr \
ft_strrchr \
ft_putchar \
ft_putstr \
ft_putnbr \
ft_memalloc \
ft_memdel \
ft_strnew \
ft_strdel \
ft_strclr \
ft_striter \
ft_striteri \
ft_strmap \
ft_strmapi \
ft_strequ \
ft_strnequ \

FLAGS = -Wall -Wextra -Werror -I.

OBJECTS = $(addsuffix .o,$(FUNCTIONS))

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(addsuffix .c,$(FUNCTIONS))
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
