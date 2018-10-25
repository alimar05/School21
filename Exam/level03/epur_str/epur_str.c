/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 19:10:04 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/11 10:34:14 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int i;
    int count;

	if (argc == 2)
	{
		i = 0;
		while (ft_is_space(argv[1][i]))
			i++;
		while (argv[1][i])
        {
        	count = 0;
            while (!ft_is_space(argv[1][i]) && argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
            while (ft_is_space(argv[1][i]))
			{
				i++;
				count++;
			}
			if (count >= 1 && argv[1][i])
				write(1, " ", 1);
        }
	}
	write(1, "\n", 1);
	return (0);
}
