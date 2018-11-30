#include <stdio.h>
int *ft_map(int *tab, int length, int(*f)(int));

int ft_sum(int nbr)
{
    return nbr + 1;
}

int main()
{
    int *result;
    int i;
    int tab[] = {32, -1, 42, 4, 9834};
    
    result = ft_map(tab, 5, ft_sum);

    i = 0;
    while (i < 5)
        printf("%d\n", result[i++]);
}
