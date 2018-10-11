/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 19:10:04 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/11 10:34:14 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}
/*
int		words_num(char *str)
{
	int i;
	int num;

	i = -1;
	num = 0;
	while (str[++i])
		if (!ft_is_space(str[i]) && (ft_is_space(str[i + 1]) || !str[i + 1]))
			num++;
	return (num);
}
*/
int		main(int argc, char **argv)
{
	int i;
	int count;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		while (argv[1][i])
	}
	write(1, "\n", 1);
	return (0);
}
