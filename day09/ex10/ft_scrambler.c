/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 02:35:35 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/28 02:41:26 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int ***temp_a;
	int *temp_b;
	int *******temp_c;
	int ****d;

	*******c = ***a;
	****d = temp_c;
	*b = ****d;
	***a = temp_b;
}