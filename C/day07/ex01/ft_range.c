#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *dest;

    if (min >= max || !(dest = (int *)malloc(sizeof(int) * (max - min + 1))))
        return NULL;

    i = 0;
    while (min + i <= max)
    {
        *(dest + i) = min + i;
        i++;
    }

    return dest;
}
