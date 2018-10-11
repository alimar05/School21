/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opposite_angle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:37:59 by bgilwood          #+#    #+#             */
/*   Updated: 2018/10/07 17:39:32 by bgilwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	opposite_angle(int i, int j, int x, int y)
{
	if (i == 0 || j == 0)
		return (0);
	if (i == y - 1 && j == x - 1)
		return (1);
	return (0);
}
