#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *list;

    list = ft_create_elem(data);
    list->next = *begin_list;
    *begin_list = list;
}
