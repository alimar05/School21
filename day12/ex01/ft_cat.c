/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 17:24:23 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/04 19:07:31 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#define BUF_SIZE 1

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_puterr(char *str)
{
	ft_putstr("ft_cat: ");
	ft_putstr(str);
	if (errno == EISDIR)
		ft_putstr(": Is a directory");
	if (errno == ENOENT)
		ft_putstr(": No such file or directory");
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		read_bytes;
	char	buff[BUF_SIZE + 1];

	if (argc == 1)
	{
		while (1)
		{
			read(1, buff, BUF_SIZE);
			write(1, buff, BUF_SIZE);
		}
	}
	i = 0;
	while (++i < argc)
	{
		errno = 0;
		if ((fd = open(argv[i], O_RDWR)) == -1)
			ft_puterr(argv[i]);
		while ((read_bytes = read(fd, buff, BUF_SIZE)) > 0)
			write(1, buff, read_bytes);
		close(fd);
	}
	return (0);
}
