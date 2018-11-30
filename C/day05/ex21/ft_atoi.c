int ft_atoi(char *str)
{
    int n;
    int sign;

    sign = 1;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    n = 0;
    while (*str >= '0' & *str <= '9')
    {
        n *= 10;
        n += *str++ - '0';
    }

    return sign * n;
}
