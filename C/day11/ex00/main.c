#include "ft_list.h"
#include <stdio.h>

int main()
{
    t_list *list;

    list = ft_create_elem("tutu");

    printf("%s\n", list->data);

    return 0;
}
