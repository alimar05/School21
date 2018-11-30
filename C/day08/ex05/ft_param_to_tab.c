#include "ft_stock_par.h"

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
    int i;
    int j;
    t_stock_par *param_to_tab;

    if (!(param_to_tab = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1))))
        return NULL;

    i = 0;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
            j++;

        param_to_tab[i].size_param = j;
        param_to_tab[i].str = av[i];
        param_to_tab[i].copy = ft_strdup(av[i]);
        param_to_tab[i].tab = ft_split_whitespaces(av[i]);

        i++;
    }
    param_to_tab[i].str = NULL;

    return param_to_tab;
}
