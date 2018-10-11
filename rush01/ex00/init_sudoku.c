/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 18:15:27 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/30 13:52:17 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_is_digit(char c)
{
	if (c >= '0' & c <= '9')
		return (1);
	else
		return (0);
}

void	init_sudoku(int sudoku[SIZE][SIZE], char **argv)
{
	int		i;
	int		j;

	j = 0;
	while (++j <= SIZE)
	{
		i = -1;
		while (++i <= SIZE)
		{
			if (ft_is_digit(argv[j][i]))
				sudoku[j - 1][i] = argv[j][i] - '0';
			else
				sudoku[j - 1][i] = 0;
		}
	}
}
