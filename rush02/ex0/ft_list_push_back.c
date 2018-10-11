/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:08:50 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/07 21:02:36 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct_list.h"

void	ft_list_push_back(t_list **begin_list, char data)
{
	t_list *list;

	if (begin_list && *begin_list)
	{
		list = *begin_list;
		while (list->next)
			list = list->next;
		list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
