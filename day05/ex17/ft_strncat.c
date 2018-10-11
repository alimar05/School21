/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 09:55:01 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/25 10:47:28 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
