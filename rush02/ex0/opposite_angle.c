/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opposite_angle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:37:59 by bgilwood          #+#    #+#             */
/*   Updated: 2018/10/07 20:49:01 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	opposite_angle(int i, int j, int x, int y)
{
	if (i == 0 || j == 0)
		return (0);
	if (i == y - 1 && j == x - 1)
		return (1);
	return (0);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_is_equal(t_list **list_input_chars, t_list **list_rush_chars)
{
	t_list	*list1;
	t_list	*list2;

	list1 = *list_input_chars;
	list2 = *list_rush_chars;
	while (list1 && list2)
	{
		if (list1->data != list2->data)
			return (0);
		list1 = list1->next;
		list2 = list2->next;
	}
	if (!list1 && !list2)
		return (1);
	return (0);
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar(2 + '0');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
