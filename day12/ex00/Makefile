# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rymuller <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 16:52:05 by rymuller          #+#    #+#              #
#    Updated: 2018/10/03 17:04:27 by rymuller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = ft_display_file.c

OBJECT = ft_display_file.o

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
