/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_list.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:42:29 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/07 21:03:41 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_LIST_H
# define FT_STRUCT_LIST_H
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list		*ft_create_elem(char data);

#endif
