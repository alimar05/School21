#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    int i;

    i = 1;
    while (begin_list)
    {
        if (nbr == i)
            return begin_list;

        begin_list = begin_list->next;
        i++;
    }

    return NULL;
}
