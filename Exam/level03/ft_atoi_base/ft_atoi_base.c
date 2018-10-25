#include <stdio.h>

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\v'
			|| c == '\f' || c == '\n' || c == '\r')
		return (1);
	else
		return (0);
}

int		ft_atoi(const char *str)
{
	int i;
	int nbr;
	int sign;

	sign = 1;
	i = 0;
	while (ft_is_space(str[i]))
		i++;
	if ((str[i] == '+' && str[i + 1] == '-') | (str[i] == '-' && str[i + 1] == '+'))
		return (0);
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	nbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - '0');
	return (sign * nbr);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int r;
	int i;
	int div;
	int nbr;

	i = 0;
	nbr = ft_atoi(str);
	div = nbr;
	while (div != 0)
	{
		i++;
		div /= str_base;
	}
	char s[i];
	s[i] = '\0';
	while (nbr != 0)
	{
		r = nbr % str_base;
		if (str_base == 16)
		{
			if (r > 9)
				s[--i] = r + 'A';
			else
				s[--i] = r + '0';
		}
		else
			s[--i] = r + '0';
		nbr /= str_base;
	}
	return (ft_atoi(s));
}

int		main(void)
{
	printf("%d\n", ft_atoi_base("10", 16));
	return (0);
}
