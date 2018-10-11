/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:19:31 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/08 13:55:28 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		letter_repeat(char c)
{
	if (c >= 'A' & c <= 'Z')
		return (c - 'A' + 1);
	else if (c >= 'a' & c <= 'z')
		return (c - 'a' + 1);
	else
		return (1);
}

int		main(int argc, char **argv)
{
	int j;
	int count;

	if (argc == 2)
	{
		j = -1;
		while (argv[1][++j])
		{
			count = letter_repeat(argv[1][j]);
			while (count--)
				write(1, &argv[1][j], 1);
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
