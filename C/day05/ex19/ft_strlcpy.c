int ft_strlen(char *str);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int src_len;
    int i;

    src_len = ft_strlen(src);

    i = 0;
    while (*(src + i) && i < size - 1)
    {
        *(dest + i) = *(src + i);
        i++;
    }
    *(dest + i) = '\0';

    return src_len;
}
