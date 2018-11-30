int ft_is_equal(char *str1, char *str2)
{
    while (*str1 || *str2)
        if (*str1++ - *str2++)
            return 0;

    return 1;
}
