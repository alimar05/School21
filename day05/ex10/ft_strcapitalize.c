/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 16:32:37 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/24 19:51:39 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_small_letter(char c)
{
	if (c >= 'a' & c <= 'z')
		return (1);
	else
		return (0);
}

int		ft_is_alphanumeric(char c)
{
	if ((c >= '0' & c <= '9') | ft_is_small_letter(c) | (c >= 'A' & c <= 'Z'))
		return (1);
	else
		return (0);
}

void	ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' & str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if (!ft_is_alphanumeric(str[i]))
		{
			if (ft_is_small_letter(str[i + 1]))
				str[i + 1] -= 32;
		}
		i++;
	}
	if (ft_is_small_letter(str[0]))
		str[0] -= 32;
	return (str);
}
