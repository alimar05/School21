/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:52:05 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/20 16:46:10 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

void	ft_strcpy(char *str1, char *str2)
{
	while ((*str1 = *str2) != '\0')
	{
		str1++;
		str2++;
	}
}

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	*temp;
	char	strrev[ft_strlen(str)];

	length = ft_strlen(str);
	temp = str + length - 1;
	i = 0;
	while (i < length)
	{
		strrev[i] = *temp--;
		i++;
	}
	strrev[i] = '\0';
	ft_strcpy(str, strrev);
	return (str);
}
