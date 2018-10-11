/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 17:09:24 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/28 00:07:40 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_putnbr(int nb)
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

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	j = 0;
	while (par[j].str)
	{
		ft_putstr(par[j].copy);
		ft_puchar('\n');
		ft_putnbr(par[j].size_param);
		ft_putchar('\n');
		i = 0;
		while (par[j].tab[i])
		{
			ft_putstr(par[j].tab[i]);
			ft_putnbr('\n');
			i++;
		}
		j++;
	}
}
