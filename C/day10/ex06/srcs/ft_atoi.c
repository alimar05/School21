int ft_atoi(char *str)
{
    int sign;
    int nbr;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else
        sign = 1;

    nbr = 0;
    while (*str >= '0' & *str <= '9')
        nbr = 10 * nbr + (*str++ - '0');

    return sign * nbr;
}
