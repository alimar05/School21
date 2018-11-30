void ft_strcpy(char *a, char *b)
{
    while ((*a = *b) != '\0')
    {
        a++;
        b++;
    }
}
