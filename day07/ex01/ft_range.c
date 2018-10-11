/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 09:18:25 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/26 14:57:25 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *dest;

	if (min >= max || !(dest = (int *)malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
