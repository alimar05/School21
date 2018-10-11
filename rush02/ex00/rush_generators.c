/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_generators.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 16:53:35 by bgilwood          #+#    #+#             */
/*   Updated: 2018/10/07 17:52:46 by bgilwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*rush_zeroth_generator(int x, int y)
{
	int		i;
	int		j;
	t_list	*rush_output;

	rush_output = NULL;
	if (x < 1)
		return (NULL);
	i = -1;
	while (++i < y)
	{
		j = -1;
		while (++j < x)
		{
			if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
				ft_list_push_back(&rush_output, 'o');
			else if (i == y - 1 || i == 0)
				ft_list_push_back(&rush_output, '-');
			else if (j == 0 || j == x - 1)
				ft_list_push_back(&rush_output, '|');
			else
				ft_list_push_back(&rush_output, ' ');
		}
		ft_list_push_back(&rush_output, '\n');
	}
	return (rush_output);
}

t_list    *rush_first_generator(int x, int y)
{
    int        i;
    int        j;
    t_list    *rush_output;
    
    rush_output = NULL;
    if (x < 1)
        return (NULL);
    i = -1;
    while (++i < y)
    {
        j = -1;
        while (++j < x)
        {
            if ((i == 0 && j == 0) || opposite_angle(i, j, x, y))
                ft_list_push_back(&rush_output, '/');
            else if ((i == y - 1 && j == 0) || (i == 0 && j == x - 1))
                ft_list_push_back(&rush_output, '\\');
            else if (i == 0 || j == 0 || j == x - 1 || i == y - 1)
                ft_list_push_back(&rush_output, '*');
            else
                ft_list_push_back(&rush_output, ' ');
        }
        ft_list_push_back(&rush_output, '\n');
    }
    return (rush_output);
}

t_list    *rush_second_generator(int x, int y)
{
    int        i;
    int        j;
    t_list    *rush_output;
    
    rush_output = NULL;
    if (x < 1)
        return (NULL);
    i = 0;
    while (i < y)
    {
        j = 0;
        while (j < x)
        {
            if (i == 0 && (j == 0 || j == x - 1))
                ft_list_push_back(&rush_output, 'A');
            else if (i == y - 1 && (j == 0 || j == x - 1))
                ft_list_push_back(&rush_output, 'C');
            else if (j == 0 || i == 0 || j == x - 1 || i == y - 1)
                ft_list_push_back(&rush_output, 'B');
            else
                ft_list_push_back(&rush_output, ' ');
            j++;
        }
        ft_list_push_back(&rush_output, '\n');
        i++;
    }
    return (rush_output);
}

t_list    *rush_third_generator(int x, int y)
{
    int        i;
    int        j;
    t_list    *rush_output;
    
    rush_output = NULL;
    if (x < 1)
        return (NULL);
    i = -1;
    while (++i < y)
    {
        j = -1;
        while (++j < x)
        {
            if ((j == 0) && (i == y - 1 || i == 0))
                ft_list_push_back(&rush_output, 'A');
            else if ((j == x - 1) && (i == y - 1 || i == 0))
                ft_list_push_back(&rush_output, 'C');
            else if (j == 0 || j == x - 1 || i == 0 || i == y - 1)
                ft_list_push_back(&rush_output, 'B');
            else
                ft_list_push_back(&rush_output, ' ');
        }
        ft_list_push_back(&rush_output, '\n');
    }
    return (rush_output);
}

t_list    *rush_fourth_generator(int x, int y)
{
    int        i;
    int        j;
    t_list    *rush_output;
    
    rush_output = NULL;
    if (x < 1)
        return (NULL);
    i = -1;
    while (++i < y)
    {
        j = -1;
        while (++j < x)
        {
            if ((i == 0 && j == 0) || opposite_angle(i, j, x, y))
                ft_list_push_back(&rush_output, 'A');
            else if ((i == y - 1 && j == 0) || (i == 0 && j == x - 1))
                ft_list_push_back(&rush_output, 'C');
            else if (j == 0 || i == 0 || i == y - 1 || j == x - 1)
                ft_list_push_back(&rush_output, 'B');
            else
                ft_list_push_back(&rush_output, ' ');
        }
        ft_list_push_back(&rush_output, '\n');
    }
    return (rush_output);
}
