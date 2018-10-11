/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:44:58 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/08 17:18:31 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int j;

	if (argc == 4)
	{
		j = -1;
		while (argv[1][++j])
		{
			if (!argv[2][1] && !argv[3][1])
			{
				if (argv[1][j] == argv[2][0])
					argv[1][j] = argv[3][0];
				write(1, &argv[1][j], 1);
			}
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
