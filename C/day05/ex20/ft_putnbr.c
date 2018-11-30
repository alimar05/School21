void ft_print_arr(char *str);

void ft_putnbr(int nbr, int radix)
{
    int r;
    int div;
    int i;

    i = 0;
    div = nbr;
    while (div != 0)
    {
        i++;
        div /= radix;
    }

    char str[i];
    str[i] = '\0';
    while (nbr != 0)
    {
        r = nbr % radix;
        if (radix == 16)
            if (r > 9)
                str[--i] = r + 55;
            else
                str[--i] = r + '0';
        else
            str[--i] = r + '0';
        nbr /= radix;
    }

    ft_print_arr(str);
}
