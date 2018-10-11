/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 09:02:20 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/21 09:10:55 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		result;

	if (power < 0)
		return (0);
	result = 1;
	while (power-- != 0)
		result *= nb;
	return (result);
}
