#include "ft_list.h"

void ft_list_reverse(t_list **begin_list)
{
    int list_size;
    int i;
    int j;

    list_size = ft_list_size(*begin_list);

    t_list temp[list_size];
    i = 0;
    j = list_size;
    while (i < list_size)
        temp[i++] = begin_list[--j][0];

    while (i < list_size)
        begin_list[i][0] = temp[i];
}
