void ft_putchar(char c);

void array_print(char array[], int length)
{
    int i;

    i = 0;
    while (i != length)
    {
        ft_putchar(array[i++]);
    }
}
