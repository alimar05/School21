#include "ft_list.h"
#include <stdio.h>

int main()
{
    t_list *list;

    ft_list_push_front(&list, "tata");
    ft_list_push_front(&list, "toto");
    ft_list_push_front(&list, "tete");

    printf("%s\n", ft_list_at(list, 2)->data);

    return 0;
}
