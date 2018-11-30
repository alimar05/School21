#include "ft_atoi.h"

int ft_atoi(char *str)
{
    sign = sign_check(str);
    if (sign == 2)
        return 0;
    if (sign == -1)
        str++;

    len = ft_strlen(str);
    int array[len];

    i = 0;
    k = len;
    while (*str != '\0') 
    {
        temp = (*str++ % 10 + 2) % 10;

        j = --k;
        while (j-- > 0 & temp != 0)
            temp = temp * 10;

        *(array + i++) = temp;
    }
    *(array + i) = '\0';

    return sign * array_int_sum(array, len);
}
