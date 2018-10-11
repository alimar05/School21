# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rymuller <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 19:41:16 by rymuller          #+#    #+#              #
#    Updated: 2018/10/02 16:54:11 by rymuller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = do-op

CFLAGS = -Wall -Werror -Wextra

SRCS = srcs/*.c

all: $(TARGET)

 $(TARGET):
	gcc $(CFLAGS) -o $(TARGET) main.c $(SRCS)

clean:
	/bin/rm -rf $(TARGET)

re: clean all

.PHONY: all clean
