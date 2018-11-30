int ft_is_duplicate(char *c, char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        if (*c == *str++)
            count++;
        if (count == 2)
            return 1;
    }

    return 0;
}
