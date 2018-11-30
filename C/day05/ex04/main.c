char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char *dest;
    char *src = "Hello World!";
    ft_strncpy(dest, src, 7);

    return 0;
}
