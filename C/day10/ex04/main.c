#include <stdio.h>
int ft_count_if(char **tab, int(*f)(char*));

int f(char *c)
{
    while (*c)
        if (*c++ == 'l')
            return 1;
    return 0;
}

int main()
{
    char *tab[] = {"afe", "bert", "del", "lon", "sdf"};
    printf("%d\n", ft_count_if(tab, f));

    return 0;
}
