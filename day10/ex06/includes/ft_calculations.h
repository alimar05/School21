/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculations.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 16:39:53 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/01 20:07:32 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CALCULATIONS_H
# define FT_CALCULATIONS_H
# include <unistd.h>

int				ft_sum(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
int				(*g_fun[])(int, int) = {ft_sum, ft_sub, ft_mul, ft_div, ft_mod};

#endif
