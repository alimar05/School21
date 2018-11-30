unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    char dest[15] = "Hello ";
    char src[] = "World!shdfuiruekgjhl lsdfghesirgh afbaiuewgfi3ufg";

    ft_strlcat(dest, src, sizeof(dest));

    return 0;
}
