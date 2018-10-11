/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 09:40:17 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/07 20:58:19 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "ft_struct_list.h"

t_list				*ft_create_elem(char data);
void				ft_list_push_back(t_list **begin_list, char data);
t_list				*rush_zeroth_generator(int x, int y);
t_list				*rush_first_generator(int x, int y);
t_list				*rush_second_generator(int x, int y);
t_list				*rush_third_generator(int x, int y);
t_list				*rush_fourth_generator(int x, int y);
void				ft_list_clear(t_list **begin_list);
void				ft_putnbr(int nbr);
int					ft_is_equal(t_list **list1, t_list **list2);
t_list				*(*g_generators[])(int, int) = {
	rush_zeroth_generator,
	rush_first_generator,
	rush_second_generator,
	rush_third_generator,
	rush_fourth_generator};

#endif
