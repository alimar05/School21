int ft_strlen(char *str);

char *ft_strncat(char *dest, char *src, int nb)
{
    int dest_len;
    int i;

    dest_len = ft_strlen(dest);

    i = 0;
    while (*(src + i) && i < nb)
    {
        *(dest + dest_len + i) = *(src + i);
        i++;
    }
    *(dest + dest_len + i) = '\0';

    return dest;
}
