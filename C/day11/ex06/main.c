#include "ft_list.h"
#include <stdio.h>

int main()
{
    t_list *list;

    ft_list_push_front(&list, "tata");
    ft_list_push_front(&list, "toto");
    ft_list_push_front(&list, "tete");

    ft_list_clear(&list);

    while(list)
    {
        printf("%s\n", list->data);
        list = list->next;
    }
}
