int ft_strlen(char *str);

char *ft_strcat(char *dest, char *src)
{
    int len;
    int i;

    len = ft_strlen(dest);
    i = 0;
    while (*(src + i) != '\0')
    {
        *(dest + len + i) = *(src + i);
        i++;
    }
    *(dest + len + i) = '\0';

    return dest;
}
