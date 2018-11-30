void ft_print_arr(char *str);

void ft_putnbr_hex(int nbr)
{
    int r;
    int div;
    int i;

    i = 0;
    div = nbr;
    while (div != 0)
    {
        i++;
        div /= 16;
    }

    char str[i];
    str[i] = '\0';
    while (nbr != 0)
    {
        r = nbr % 16;
        if (r > 9)
            str[--i] = r + 55;
        else
            str[--i] = r + '0';
        nbr /= 16;
    }

    ft_print_arr(str);
}
