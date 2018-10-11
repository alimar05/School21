/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 09:20:21 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/29 18:43:13 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# define SIZE 9
# include <unistd.h>
# include <stdlib.h>

void	init_sudoku(int sudoku[SIZE][SIZE], char **argv);
int		is_sudoku(int sudoku[SIZE][SIZE]);
void	print_sudoku(int sudoku[SIZE][SIZE]);

#endif
