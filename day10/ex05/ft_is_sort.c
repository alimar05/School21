/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 14:57:32 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/01 20:18:53 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (length == 0 | length == 1)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			return (0);
	}
	return (1);
}
