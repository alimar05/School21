int ft_is_separator(char c);

int ft_word_number(char *str)
{
    int i;
    int word_number;

    i = 0;
    word_number = 0;
    while (*(str + i))
    {
        if (!ft_is_separator(*(str + i)))
            if (ft_is_separator(*(str + i + 1)) | (*(str + i + 1) == '\0'))
                word_number++;

        i++;
    }

    return word_number;
}
