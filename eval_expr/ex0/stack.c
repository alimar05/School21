/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 11:01:43 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/06 12:53:08 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "eval_expr.h"

t_stack	*push(t_stack *head, char c)
{
	t_stack *tmp;

	if (!(tmp = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	tmp->c = c;
	tmp->next = head;
	return (tmp);
}

char	delete(t_stack **head)
{
	char	c;
	t_stack *tmp;

	if (*head == NULL)
		return ('\0');
	tmp = *head;
	c = (*head)->c;
	*head = tmp->next;
	free(tmp);
	return (c);
}

int		prior(char c)
{
	if (c == '(')
		return (1);
	if (c == '*' | c == '/')
		return (2);
	if (c == '+' | c == '-')
		return (3);
}
/*
int		main(void)
{
	t_stack *head;

	head = NULL;
	head = push(head, '*');
	head = push(head, '/');
	head = push(head, '+');
	printf("%c", delete(&head));
	printf("%c", delete(&head));
	printf("%c", delete(&head));
	return (0);
}
*/
