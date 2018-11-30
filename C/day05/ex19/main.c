unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char buf[10];
    char *str = "obrazec stroki";
    ft_strlcpy(buf, str, sizeof(buf));

    return 0;
}
