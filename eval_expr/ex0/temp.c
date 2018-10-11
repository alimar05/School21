#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_putstr(argv[1]);
	else
		write(1, "\n", 1);
}
