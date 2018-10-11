/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:12:49 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/08 19:15:18 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	unsigned int	i;
	char			*oper;
	int		result;

	if (argc == 4)
	{
		i = 0;
		oper = "+-*/%";
		while (argv[2][0] != oper[i])
			i++;
		result = g_fun[i](atoi(argv[1]), atoi(argv[3]));
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
