/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 15:40:25 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/02 16:10:27 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;
	t_list	*list_next;

	list = *begin_list;
	while (list)
	{
		list_next = list->next;
		free(list);
		list = list_next;
	}
	*begin_list = NULL;
}
