/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 12:04:21 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/25 20:33:51 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j] &&
				to_find[j] && str[i + j])
			j++;
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (0);
}
