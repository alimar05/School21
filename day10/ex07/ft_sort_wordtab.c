/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:23:59 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/01 21:11:57 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void		ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		tab_len;
	char	*temp;

	tab_len = 0;
	while (tab[tab_len])
		tab_len++;
	i = 0;
	while (++i < tab_len)
	{
		j = i;
		while (++j < tab_len)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
}
