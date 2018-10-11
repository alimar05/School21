/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:14:37 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/10 18:58:07 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_is_space(char c)
{
	if (c == ' ' | c == '\n' | c == '\r' |
			c == '\t' | c == '\v' | c == '\f')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int nb;
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
	nb = 0;
	while (*str >= '0' & *str <= '9')
		nb = nb * 10 + (*str++ - '0');
	return (sign * nb);
}

int		ft_is_prime(int nb)
{
	int i;

	if (nb == 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;
	int arg;
	int result;

	if (argc == 2)
	{
		i = -1;
		result = 0;
		arg = ft_atoi(argv[1]);
		while (++i <= arg)
			if (ft_is_prime(i))
				result += i;
		ft_putnbr(result);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
