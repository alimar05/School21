#include <unistd.h>
#include "ft_stock_par.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while(*str)
        ft_putchar(*str++);
}

void ft_putnbr(int nbr)
{
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
        ft_putchar(nbr + '0');
}

void ft_show_tab(struct s_stock_par *par)
{
    int i;
    int j;

    i = 0;
    while (par[i].str)
    {
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        ft_putnbr(par[i].size_param);
        ft_putchar('\n');
        j = 0;
        while (par[i].tab[j])
        {
            ft_putstr(par[i].tab[j]);
            ft_putchar('\n');
            j++;
        }
        i++;
    }
}
