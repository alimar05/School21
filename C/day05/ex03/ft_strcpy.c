char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (*src != '\0')
        *(dest + i++) = *src++;
    *(dest + i) = *src;

    return dest;
}
