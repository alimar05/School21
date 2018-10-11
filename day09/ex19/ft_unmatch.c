/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 11:28:08 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/28 12:01:08 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_unmatch(int *tab, int length)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		j = 0;
		while (j < length)
		{
			if (tab[i] == tab[j] && i != j)
				count++;
			j++;
		}
		if (count == 0 || count > 1)
			return (tab[i]);
		count = 0;
		i++;
	}
	return (0);
}
