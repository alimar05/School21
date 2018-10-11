/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 20:56:32 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/28 00:09:07 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void			ft_show_tab(t_stock_par *par);
t_stock_par		*ft_param_to_tab(int ac, char **av);

#endif
