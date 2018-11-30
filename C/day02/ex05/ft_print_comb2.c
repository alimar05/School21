#include "ft_print_comb2.h"

void ft_print_comb2(void)
{
    while (i <= 99)
    {
        j = k++;
        while (j <= 99)
        {
            a = i / 10 + '0';
            
            if (i < 10)
                b = i + '0';
            else
                b = i % 10 + '0';

            c = j / 10 + '0';

            if (j < 10)
                d = j + '0';
            else
                d = j % 10 + '0';

            if (a != c | b != d)
               display_comb(a, b, c, d);
            j++;
        }
        i++;
    }
}
