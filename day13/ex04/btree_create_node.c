/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:42:11 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/05 21:00:30 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *btree;

	if (!(btree = (t_btree *)malloc(sizeof(t_btree))))
		return (NULL);
	btree->left = NULL;
	btree->right = NULL;
	btree->item = item;
	return (btree);
}
