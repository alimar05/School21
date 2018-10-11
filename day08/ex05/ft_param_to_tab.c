/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 15:22:25 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/27 23:22:29 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i])
	{
		i++;
		len++;
	}
	return (len);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		src_len;

	src_len = ft_strlen(src);
	if (!(dest = (char *)malloc(sizeof(*src) * (src_len + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			j;
	t_stock_par	*param_to_tab;

	if (!(param_to_tab =
				(t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	j = 0;
	while (j < ac)
	{
		param_to_tab[j].size_param = ft_strlen(av[j]);
		param_to_tab[j].str = av[j];
		param_to_tab[j].copy = ft_strdup(av[j]);
		param_to_tab[j].tab = ft_split_whitespaces(av[j]);
		j++;
	}
	param_to_tab[j].str = '\0';
	return (param_to_tab);
}
