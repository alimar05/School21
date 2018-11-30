#include "ft_stock_par.h"
#include <stdio.h>
struct s_stock_par *ft_param_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_par *par);

int main(int argc, char **argv)
{
    struct s_stock_par *param_to_tab;
    param_to_tab = ft_param_to_tab(argc, argv);
    ft_show_tab(param_to_tab);
    /*
    int i;
    t_stock_par *param_to_tab;
    param_to_tab = ft_param_to_tab(argc, argv);
    i = 0;
    while (i < argc)
        printf("%d\n", param_to_tab[i++].size_param);
    */

    return 0;
}
