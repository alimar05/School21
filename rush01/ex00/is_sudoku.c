/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 18:23:44 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/30 18:34:24 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		is_dupl_in_line(int *line)
{
	int i;
	int	k;

	i = -1;
	while (++i < SIZE)
	{
		k = -1;
		while (++k < SIZE)
			if (line[k] != 0 & k != i & line[i] == line[k])
				return (1);
	}
	return (0);
}

int		is_dupl_in_rows(int sudoku[SIZE][SIZE])
{
	int		j;

	j = -1;
	while (++j < SIZE)
	{
		if (is_dupl_in_line(sudoku[j]))
			return (1);
	}
	return (0);
}

int 	is_dupl_in_cols(int sudoku[SIZE][SIZE])
{
	int 	i;
	int		j;
	int		temp[SIZE];
	
	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
			temp[j] = sudoku[j][i];
		if (is_dupl_in_line(temp))
			return (1);
	}
	return (0);
}

int		is_dupl_in_block(int j, int i, int sudoku[SIZE][SIZE])
{
	int k;
	int x;
	int y;
	int	temp[SIZE];

	k = 0;
	x = SIZE / 3 + j + 1;
	y = SIZE / 3 + i + 1;
	while (++j < x)
	{ 
		while (++i < y)
			temp[k++] = sudoku[j][i];
		if (is_dupl_in_line(temp))
			return (1);
		i = y - SIZE / 3 - 1;
	}
	return (0);
}

int		is_sudoku(int sudoku[SIZE][SIZE])
{
	int i;
	int j;

	if (is_dupl_in_rows(sudoku) | is_dupl_in_cols(sudoku))
		return (0);

	j = -1;
	while (j < SIZE - 1)
	{
		i = -1;
		while (i < SIZE - 1)
		{
			if (is_dupl_in_block(j, i, sudoku))
				return (0);
			i = i + 3;
		}
		j = j + 3;
	}
	return (1);
}
