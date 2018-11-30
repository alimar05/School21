#include "ft_putnbr.h"

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        nb = -1 * nb;
        ft_putchar('-');
    }

    length = number_length(nb);

    char array[length];

    i = 0;
    while (i != length)
    {
        array[i++] = nb % 10 + '0';
        nb /= 10;
    }

    array_print(array, length);
}
