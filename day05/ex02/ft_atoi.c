/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:47:59 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/24 18:22:40 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
