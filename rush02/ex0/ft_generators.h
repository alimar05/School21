/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generators.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:51:46 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/07 21:00:28 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GENERATORS_H
# define FT_GENERATORS_H
# include <stdlib.h>
# include "ft_struct_list.h"

int		opposite_angle(int i, int j, int x, int y);
void	ft_list_push_back(t_list **begin_list, char data);

#endif
