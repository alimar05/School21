/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 14:33:23 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/26 16:00:45 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (!(range[0] = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	if (min >= max)
		range[0] = NULL;
	i = 0;
	while (min + i < max)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
