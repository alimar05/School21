/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rymuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:42:01 by rymuller          #+#    #+#             */
/*   Updated: 2018/10/04 19:49:33 by rymuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 1

int		main(int argc, char **argv)
{
	int		fd;
	int		read_bytes;
	char	buff[BUF_SIZE + 1];

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(1, "open() failed\n", 14);
			return (1);
		}
		while ((read_bytes = read(fd, buff, BUF_SIZE)) > 0)
			write(1, buff, read_bytes);
		if (close(fd) == -1)
		{
			write(1, "close() failed\n", 15);
			return (1);
		}
	}
	return (0);
}
