#include <stdio.h>
int ft_is_sort(int *tab, int length, int(*f)(int, int));

int f(int a, int b)
{
    return a - b;
}

int main()
{
    int tab[] = {1, 1, 1, 1, 2, 3, 1, 1};
    printf("%d\n", ft_is_sort(tab, 8, f));

    return 0;
}
