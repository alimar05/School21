#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
   
    if (min >= max)
        *range = NULL;

    if (!(*range = (int *)malloc(sizeof(int) * (max - min))))
        return 0;

    while (min + i < max)
    {
        *(*range + i) = min + i;
        i++;
    }
    
    return i;
}
