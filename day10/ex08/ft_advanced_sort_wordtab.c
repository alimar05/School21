/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 21:13:13 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/02 21:39:41 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
}
