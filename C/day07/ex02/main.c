#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max);

int main()
{
    int **range; 
    int i;

    printf("%d\n", ft_ultimate_range(range, -1, 6));

    i = 0;
    while (i < 7)
        printf("%d\n", *(*range + i++));

    return 0;
}
