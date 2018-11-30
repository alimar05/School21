#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str);

char *ft_concat_params(int argc, char **argv)
{
    int i;
    int len;
    char *result;

    i = 0;
    len = 0;
    while (i < argc)
    {
        len += ft_strlen(*(argv + i)) + 1;
        i++;
    }

    result = (char *)malloc(sizeof(char) * len);
    if (result)
    {
        i = 0;
        while (i < len)
        {
            *(result + i) = *(*argv + i);
            if (*(*argv + i) == '\0')
                *(result + i) = '\n';
            i++;
        }
        *(result + i) = '\0';
    }
    return result;
}
