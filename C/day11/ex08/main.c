#include "ft_list.h"
#include <stdio.h>

int main()
{
    t_list *list;

    ft_list_push_front(&list, "1");
    ft_list_push_front(&list, "2");
    ft_list_push_front(&list, "3");

    ft_list_reverse(&list);

    while(list)
    {
        printf("%s\n", list->data);
        list = list->next;
    }
}
