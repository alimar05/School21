/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:02:59 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/06 13:56:33 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		eval_expr(char *str)
{
	int		i;
	int		j;
	char	*result;
	t_stack *oper;

	i = 0;
	while (str[i] != '\0' & str[i] != '=')
	{
		if (str[i] == ')')
		{
			while ((oper->c) != '(')
			{
				result[j++] = delete(&oper);
				delete(&oper);
			}
			if (str[i] >= '0' & str[i] <= '9')
				result[j++] = str[i];
			if (str[i] == '(')
				oper = push(oper, '(');
			if (str[i] == '+' | str[i] == '-' str[i] == '/' | str[i] '*')
			{
				if (oper == NULL)
					oper = push(oper, str[i]);
				else
				{
					if (prior(oper->c) < prior(str[i]))
						oper = push(oper, str[i]);
					else
					{
						while ((oper != NULL) & (prior(oper->c) >= prior(str[i])))
							result[j++] = delete(&oper);
						oper = push(oper, str[i]);
					}
				}
			}
		}
		i++;
