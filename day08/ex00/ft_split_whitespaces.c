/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 19:03:32 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/27 11:07:19 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c)
{
	if (c == ' ' | c == '\t' | c == '\n')
		return (1);
	else
		return (0);
}

int		words_num(char *str)
{
	int		i;
	int		words_num;

	i = 0;
	words_num = 0;
	while (str[i])
	{
		if (!is_separator(str[i]))
			if (is_separator(str[i + 1]) || (str[i + 1] == '\0'))
				words_num++;
		i++;
	}
	return (words_num);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**words;
	char	*str_buf;

	if (!str ||
			!(words = (char **)malloc(sizeof(char *) * (words_num(str) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	str_buf = str;
	while (j < words_num(str))
	{
		while (is_separator(*str_buf))
			str_buf++;
		words[j] = (char *)malloc(sizeof(char *));
		while (!is_separator(*str_buf) || !*str_buf)
			words[j][i++] = *str_buf++;
		words[j][i] = '\0';
		j++;
		i = 0;
	}
	words[j] = NULL;
	return (words);
}
