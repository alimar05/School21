/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 11:04:03 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/21 22:00:09 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int result;
	int i;

	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	result = 0;
	while (nb != result)
	{
		i++;
		result = i * i;
		if (nb < result)
			return (0);
	}
	return (i);
}
