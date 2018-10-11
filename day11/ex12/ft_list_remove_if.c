/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:50:45 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/03 12:00:25 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list **buff;
	t_list *victim;

	buff = begin_list;
	while (*buff)
	{
		if ((*cmp)((*buff)->data, data_ref) == 0)
		{
			victim = *buff;
			*buff = victim->next;
			free(victim);
		}
		else
			buff = &(*buff)->next;
	}
}
