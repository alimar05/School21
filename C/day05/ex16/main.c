char *ft_strcat(char *dest, char *src);

int main()
{
    char dest[] = "Hello ";
    char *src = "World!";

    ft_strcat(dest, src);

    return 0;
}
