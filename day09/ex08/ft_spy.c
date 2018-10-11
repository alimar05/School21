/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 00:22:00 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/28 01:02:30 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_str_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' & str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	char *s1_buf;
	char *s2_buf;

	s1_buf = s1;
	s2_buf = s2;
	while (*s1_buf == *s2_buf)
	{
		if (!*s1_buf)
			return (0);
		s1_buf++;
		s2_buf++;
	}
	return (*s1_buf - *s2_buf);
}

int		main(int argc, char **argv)
{
	int j;

	if (argc != 1)
	{
		j = 1;
		while (j < argc)
		{
			argv[j] = ft_str_lowercase(argv[j]);
			if ((ft_strcmp(argv[j], "president") == 0)
					|| (ft_strcmp(argv[j], "attack") == 0)
					|| (ft_strcmp(argv[j], "bauer") == 0))
				write(1, "Alert!!!\n", 9);
			j++;
		}
	}
	return (0);
}
