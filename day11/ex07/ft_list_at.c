/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:17:53 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/02 16:34:00 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*list;

	i = 1;
	list = begin_list;
	while (list)
	{
		if (nbr == i)
			return (list);
		list = list->next;
		i++;
	}
	return (NULL);
}
