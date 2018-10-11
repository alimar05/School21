/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:08:54 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/09 16:32:30 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		main(int argc, char **argv)
{
	int	i;
	int j;

	if (argc == 3)
	{
		j = 0;
		i = 0;
		while (argv[2][j])
		{
			if (argv[2][j] == argv[1][i])
				i++;
			j++;
		}
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
