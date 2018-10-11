/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 18:22:35 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/30 13:20:38 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_sudoku(int sudoku[SIZE][SIZE])
{
	int		i;
	int		j;

	j = -1;
	while (++j < SIZE)
	{
		i = -1;
		while (++i < SIZE)
		{
			ft_putchar(sudoku[j][i] + '0');
			if (i < SIZE - 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
