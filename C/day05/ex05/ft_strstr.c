char *ft_strstr(char *str, char *to_find)
{
    int i;

    i = 0;
    while (*str != '\0')
    {
        if (*str++ == *(to_find + i))
            if (*(to_find + ++i) == '\0')
                return to_find;
    }

    return '\0';
}
