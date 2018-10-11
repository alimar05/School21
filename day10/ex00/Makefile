# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rymuller <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 09:43:27 by rymuller          #+#    #+#              #
#    Updated: 2018/10/01 11:59:39 by rymuller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -c -Wall -Wextra -Werror

HEADERS = includes

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	   srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o \
		  ft_strlen.o ft_swap.o

all: $(NAME)

 $(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -I $(HEADERS)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
