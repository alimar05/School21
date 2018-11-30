int ft_is_separator(char c);

int ft_word_len(char *str)
{
    int i;

    i = 0;
    while (!ft_is_separator(*(str + i)))
        i++;

    return i;
}
