/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 13:14:01 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/02 13:54:14 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int			i;
	t_list		*list;

	if (begin_list)
	{
		i = 0;
		list = begin_list;
		while (list)
		{
			i++;
			list = list->next;
		}
	}
	else
		return (0);
	return (i);
}
