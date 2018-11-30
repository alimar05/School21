char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (*src != '\0')
        {
            *(dest + i++) = *src++;
            if (i == n)
                *(dest + i) = '\0';
        }
        else
            *(dest + i++) = *src;
    }

    return dest;
}
