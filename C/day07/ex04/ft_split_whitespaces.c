#include <stdlib.h>
int ft_word_len(char *str);
int ft_word_number(char *str);
int ft_is_separator(char c);

char **ft_split_whitespaces(char *str)
{
    char **word;
    int word_number;
    int i;
    int j;

    if (!str || !(word = (char **)malloc(sizeof(char *) * (ft_word_len(str) + 1))))
        return NULL;
    i = 0;
    j = 0;
    word_number = ft_word_number(str);
    while (i < word_number)
    {
        word[i] = (char *)malloc(sizeof(char) * (ft_word_len(str) + 1));

        while (!ft_is_separator(*str) || !*str)
            word[i][j++] = *str++;
        word[i][j] = '\0';

        while (ft_is_separator(*str))
            str++;

        i++;
        j = 0;
    }
    word[i] = '\0';

    return word;
}
