/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 09:44:05 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/07 21:03:43 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct_list.h"

t_list		*ft_create_elem(char data)
{
	t_list *elem;

	if (!(elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	elem->next = NULL;
	elem->data = data;
	return (elem);
}
