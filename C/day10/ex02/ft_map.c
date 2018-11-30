#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
    int *result;
    int i;

    if (!(result = (int *)malloc(sizeof(int) * length)))
        return NULL;

    i = 0;
    while (i < length)
        result[i++] = f(tab[i]);

    return result;
}
