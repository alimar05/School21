/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 15:56:44 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/07 20:58:21 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		rush_sizes(t_list **list_input_chars, int *x, int *y)
{
	int		count;
	int		read_bytes;
	t_list	*list;
	
	*x = 0;
	*y = 0;
	count = 0;
	read_bytes = 0;
	list = *list_input_chars;
	while (list)
	{
		if (list->data == '\n' && count == 0)
		{
			count++;
			*x = read_bytes;
		}
		if (list->data == '\n')
			(*y)++;
		read_bytes++;
		list = list->next;
	}
}

void		check_matches(t_list *input, int *matches, int x, int y)
{
	int		i;
	t_list	*list_rush_chars;

	i = -1;
	while (++i < 5)
	{
		list_rush_chars = g_generators[i](x, y);
		matches[i] = ft_is_equal(&input, &list_rush_chars);
		ft_list_clear(&list_rush_chars);
	}
}

void		genr_output(int *matches, int x, int y)
{
	int		i;
	int		flag;

	flag = 0;
	i = -1;
	while (++i < 5)
	{
		if (matches[i])
		{
			if (flag == 1)
				write(1, " || ", 4);

			write(1, "[rush-0", 7);
			ft_putnbr(i);
			write(1, "] [", 3);
			ft_putnbr(x);
			write(1, "] [", 3);
			ft_putnbr(y);
			write(1, "]\n", 2);
			flag = 1;
		}
	}
	if (!flag)
		write(1, "Not a rush.\n", 12);
}

int			main(void)
{
	int		x;
	int		y;
	char	buff[1];
	int		matches[5];
	t_list	*list_input_chars;

	while (read(0, buff, 1))
		ft_list_push_back(&list_input_chars, *buff);
	rush_sizes(&list_input_chars, &x, &y);
	check_matches(list_input_chars, matches, x, y);
	genr_output(matches, x, y);
	ft_list_clear(&list_input_chars);
	return (0);
}
