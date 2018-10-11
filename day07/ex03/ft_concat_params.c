/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 16:09:44 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/26 19:01:37 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
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

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*result;

	i = 1;
	len = 0;
	while (i < argc)
		len += ft_strlen(argv[i++]) + 1;
	if ((result = (char *)malloc(sizeof(char) * len)))
	{
		i = -1;
		while (++i < len)
		{
			result[i] = argv[1][i];
			if (argv[1][i] == '\0')
				result[i] = '\n';
		}
		result[i - 1] = '\0';
	}
	else
		result = NULL;
	return (result);
}
