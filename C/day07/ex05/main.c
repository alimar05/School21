char **ft_split_whitespaces(char *str);
void ft_print_words_tables(char **tab);

int main()
{
    char *str = "Hello World! My name is Qwerty";
    char **result = ft_split_whitespaces(str);
    ft_print_words_tables(result);

    return 0;
}
