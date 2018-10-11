/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 10:14:10 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/27 10:40:39 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (tab[++j])
	{
		ft_putstr(tab[i++]);
		ft_putchar('\n');
	}
}
