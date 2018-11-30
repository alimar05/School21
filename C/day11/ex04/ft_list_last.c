#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
    t_list *list;

    list = begin_list;
    while (list->next)
        list = list->next;

    return list;
}
