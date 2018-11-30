#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
    t_list *elem;
    
    if (!(elem = (t_list *)malloc(sizeof(t_list))))
        return NULL;

    elem->data = data;
    elem->next = NULL;

    return elem;
}
