/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:23:08 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/08 17:55:41 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		j;

	if (argc == 2)
	{
		j = -1;
		while (argv[1][++j])
		{
			if (argv[1][j] >= 'A' & argv[1][j] <= 'Z')
				argv[1][j] = 'Z' - argv[1][j] + 'A';
			else if (argv[1][j] >= 'a' & argv[1][j] <= 'z')
				argv[1][j] = 'z' - argv[1][j] + 'a';
			write(1, &argv[1][j], 1);
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
