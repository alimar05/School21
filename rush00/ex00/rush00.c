/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 14:58:52 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/23 19:56:43 by calyce-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		print_matrix(int x, int y, char matrix[y][x])
{
	int		i;
	int		j;

	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
			ft_putchar(matrix[j][i]);
		ft_putchar('\n');
	}
}

void		rectangle(int x, int y, char matrix[y][x])
{
	int		i;
	int		j;

	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if (j == 0 | j == y - 1)
				matrix[j][i] = '-';
			else if (i == 0 | i == x - 1)
				matrix[j][i] = '|';
			else
				matrix[j][i] = ' ';
		}
	}
}

void		angles(int x, int y, char matrix[y][x])
{
	matrix[0][0] = 'o';
	if (y > 1)
		matrix[y - 1][0] = 'o';
	if (x > 1 & y > 1)
		matrix[y - 1][x - 1] = 'o';
	if (x > 1)
		matrix[0][x - 1] = 'o';
}

void		rush(int x, int y)
{
	char	matrix[y][x];

	rectangle(x, y, matrix);
	angles(x, y, matrix);
	print_matrix(x, y, matrix);
}
