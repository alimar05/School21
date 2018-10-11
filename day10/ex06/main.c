/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 19:08:23 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/01 20:04:12 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_calculations.h"

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\r' ||
			c == '\t' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int nbr;
	int sign;

	sign = 1;
	while (ft_is_space(*str))
		str++;
	if ((str[0] == '+' & str[1] == '-') | (str[0] == '-' & str[1] == '+'))
		return (0);
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	nbr = 0;
	while (*str >= '0' & *str <= '9')
		nbr = nbr * 10 + (*str++ - '0');
	return (sign * nbr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int		main(int argc, char **argv)
{
	int		i;
	char	*signs;

	if (argc == 4)
	{
		signs = "+-*/%";
		if (argv[2][0] == '/' & argv[3][0] == '0')
			write(1, "Stop : division by zero\n", 24);
		else if (argv[2][0] == '%' & argv[3][0] == '0')
			write(1, "Stop : modulo by zero\n", 22);
		else
		{
			i = -1;
			while (signs[++i])
				if (argv[2][0] == signs[i] & argv[2][1] == '\0')
				{
					ft_putnbr(g_fun[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
					write(1, "\n", 1);
					return (0);
				}
			write(1, "0\n", 2);
		}
	}
	return (0);
}
