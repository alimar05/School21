#include "ft_strrev.h"

char *ft_strrev(char *str)
{
    char *temp;

    length = ft_strlen(str);
    temp = str + length - 1;

    char strrev[length];

    i = 0;
    while (i < length)
    {
        *(strrev + i)  = *temp--;
        i++;
    }
    *(strrev + i) = '\0';

    ft_strcpy(str, strrev);

    return str;
}
