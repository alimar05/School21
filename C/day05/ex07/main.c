#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
    char *s1 = "oac";
    char *s2 = "obc";
    printf("%d\n", ft_strncmp(s1, s2, 3));

    return 0;
}
