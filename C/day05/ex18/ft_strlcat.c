int ft_strlen(char *str);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int dest_len;
    int src_len;
    int i;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    
    i = 0;
    while (*(src + i) && i < size - dest_len - 1)
    {
        *(dest + dest_len + i) = *(src + i);
        i++;
    }
    if (dest_len < size)
        *(dest + dest_len + i) = '\0';

    return dest_len + src_len;
}
