#include "ft_list.h"

void ft_list_clear(t_list **begin_list)
{
    t_list *list;
    t_list *list_next;

    list = *begin_list;
    while (list)
    {
        list_next = list->next;
        free(list);
        list = list_next;
    }
    *begin_list = NULL;
}
