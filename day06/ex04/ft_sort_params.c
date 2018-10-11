/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 15:47:38 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/25 17:35:51 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int			ft_strcmp(char *s1, char *s2)
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

void		ft_print_args(int argc, char **argv)
{
	int k;

	k = 1;
	while (k < argc)
	{
		ft_putstr(argv[k++]);
		ft_putchar('\n');
	}
}

int			main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	if (argc != 1)
	{
		i = 0;
		while (++i < argc)
		{
			j = i;
			while (++j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					temp = argv[i];
					argv[i] = argv[j];
					argv[j] = temp;
				}
			}
		}
		ft_print_args(argc, argv);
	}
	return (0);
}
