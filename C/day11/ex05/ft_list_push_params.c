#include "ft_list.h"

t_list *ft_list_push_params(int ac, char **av)
{
    int i;
    t_list *begin_list;
    t_list *list;

    begin_list = ft_create_elem(av[0]);
    i = 1;
    while (i < ac)
    {
         list = ft_create_elem(av[i++]);
         list->next = begin_list;
         begin_list = list;
    }

    return begin_list;
}
