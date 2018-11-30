#include "ft_list.h"
#include <stdio.h>

int main()
{
    t_list *list;

    ft_list_push_back(&list, "tik tak");
    ft_list_push_back(&list, "tro tro");
    ft_list_push_back(&list, "to ro");
    ft_list_push_back(&list, "ha ha");

    while (list)
    {
        printf("%s\n", list->data);
        list = list->next;
    }

    return 0;
}
