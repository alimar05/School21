/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 22:25:34 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/27 22:55:16 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	while (factory[j])
	{
		j = 0;
		while (factory[j][i])
		{
			free(factory[j][i]);
			i++;
		}
		free(factory[j]);
		j++;
	}
	free(factory);
}
