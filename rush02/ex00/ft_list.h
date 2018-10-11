/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 09:40:17 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/07 15:39:43 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list				*ft_create_elem(char data);
void				ft_list_push_back(t_list **begin_list, char data);

#endif
