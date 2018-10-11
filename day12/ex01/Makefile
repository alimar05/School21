# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rymuller <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 16:52:05 by rymuller          #+#    #+#              #
#    Updated: 2018/10/04 11:16:55 by rymuller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRCS = ft_cat.c

OBJECT = ft_cat.o

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

 $(NAME): $(OBJECT)
	gcc $(OBJECT) -o $(NAME)

 $(OBJECT): $(SRCS)
	gcc $(CFLAGS) $(SRCS)

clean:
	/bin/rm -rf $(OBJECT)

fclean: clean
	/bin/rm -rf $(NAME)

.PHONY: all clean fclean
