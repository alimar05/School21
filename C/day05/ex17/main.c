#include <stdio.h>
char *ft_strncat(char *dest, char *src, int nb);

int main()
{
    char dest[60] = "Hello ";
    char src[] = "World!";

    printf("%s\n", ft_strncat(dest, src, 110));

    return 0;
}
