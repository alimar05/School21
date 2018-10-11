/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:38:00 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/05 21:00:28 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item);

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (*root)
	{
		if (cmpf((*root)->left, item))
		{
			btree_insert_data(&((*root)->left, (*root)->item, cmpf));
			(*root)->left = btree_insert_data(item);
		}
		else
		{
			btree_insert_data(&((*root)->right, (*root)->item, cmpf));
			(*root)->right = btree_insert_data(item);
		}
	}
	else
		(*root) = btree_create_node(item);
}
