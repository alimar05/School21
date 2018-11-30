#include "ft_atoi_base.h"

int ft_atoi_base(char *str, char *base)
{
    if (ft_is_base(base))
    {
        int sign;
        int nbr;

        sign = 1;
        nbr = ft_atoi(str);
        if (nbr < 0)
            sign *= -1;

        if (ft_is_equal(base, "dec"))
            return sign * ft_atoi(ft_putnbr(nbr, 10));
        if (ft_is_equal(base, "bin"))
            return sign * ft_atoi(ft_putnbr(nbr, 2));
        if (ft_is_equal(base, "hex"))
            return sign * ft_atoi(ft_putnbr(nbr, 16));
        if (ft_is_equal(base, "oct"))
            return sign * ft_atoi(ft_putnbr(nbr, 8));
    }
    else
        return 0;
}
