/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 19:09:24 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/05 19:29:10 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*apply)(void *))
{
	if (root)
	{
		apply(root->item);
		btree_apply_prefix(root->left, apply);
		btree_apply_prefix(root->right, apply);
	}
}
