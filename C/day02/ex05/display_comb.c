void ft_putchar(char c);

void display_comb(char a, char b, char c, char d)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(' ');
    ft_putchar(c);
    ft_putchar(d);

    if (a != '9' | b != '8')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}
