#include <stdio.h>
int ft_any(char **tab, int(*f)(char*));

int f(char *c)
{
    while (*c)
        if (*c++ == 'l')
            return 1;
    return 0;
}

int main()
{
    char *tab[] = {"a", "b", "c", "d", "dez", "e", "f"};

    printf("%d\n", ft_any(tab, f));

    return 0;
}
