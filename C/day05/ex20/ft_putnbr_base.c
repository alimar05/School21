#include "ft_putnbr_base.h"

void ft_putnbr_base(int nbr, char *base)
{
    if (ft_is_base(base))
    {

        if (nbr < 0)
        {
            ft_putchar('-');
            nbr *= -1;
        }

        if (ft_is_equal(base, "dec"))
            ft_putnbr(nbr, 10);
        if (ft_is_equal(base, "bin"))
            ft_putnbr(nbr, 2);
        if (ft_is_equal(base, "hex"))
            ft_putnbr(nbr, 16);
        if (ft_is_equal(base, "oct"))
            ft_putnbr(nbr, 8);
    }
}
