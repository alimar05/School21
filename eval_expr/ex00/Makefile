# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rymuller <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/06 15:50:35 by rymuller          #+#    #+#              #
#    Updated: 2018/10/06 16:16:44 by rymuller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	echo 'set -f; echo $$1 | bc' > eval_expr
	chmod +x eval_expr

clean:
	chmod +x eval_expr

fclean: clean
	/bin/rm -rf eval_expr

.PHONY: all clean fclean
