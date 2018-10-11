/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 23:27:37 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/27 23:51:49 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (base % 2)
		return (1 + ft_collatz_conjecture(3 * base + 1));
	else
		return (1 + ft_collatz_conjecture(base / 2));
	return (0);
}
