#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        i++;
        str++;
    }

    return i;
}

char *ft_strdup(char *src)
{
    int src_len;
    char *dest;
    int i;

    src_len = ft_strlen(src);
    if (!(dest = (char *)malloc(sizeof(*src) * (src_len + 1))))
        return NULL;

    i = 0;
    while (*(src + i))
    {
        *(dest + i) = *(src + i);
        i++;
    }
    *(dest + i) = '\0';
    
    return dest;
}
