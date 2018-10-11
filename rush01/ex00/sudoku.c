/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 08:00:56 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/30 13:52:13 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	int		sudoku[SIZE][SIZE];

	if (argc == 10)
	{
		init_sudoku(sudoku, argv);
		if (is_sudoku(sudoku))
		{
			print_sudoku(sudoku);	
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
