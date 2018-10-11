/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 15:41:03 by rymuller          #+#    #+#             */
/*   Updated: 2018/09/25 17:37:18 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 1)
	{
		j = argc - 1;
		while (j > 0)
		{
			i = 0;
			while (argv[j][i])
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			ft_putchar('\n');
			j--;
		}
	}
	return (0);
}
