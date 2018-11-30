int ft_is_alphanumeric(char *str);
int ft_is_small_letter(char *str);

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (*(str + i))
    {
        if (!ft_is_alphanumeric(str + i))
            if (ft_is_small_letter(str + i + 1))
                *(str + i + 1) -= 32;
        i++;
    }

    if (ft_is_small_letter(str))
        *str -= 32;

    return str;
}
