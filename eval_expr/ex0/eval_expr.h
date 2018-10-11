/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 10:28:38 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/06 12:03:26 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H
# include <stdlib.h>

typedef struct	s_stack
{
	char			c;
	struct s_stack	*next;
}					t_stack;

#endif
