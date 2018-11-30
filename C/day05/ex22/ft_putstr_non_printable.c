void ft_putchar(char c);
int ft_is_printable(char c);
void ft_putnbr_hex(int nbr);

void ft_putstr_non_printable(char *str)
{
    int i;

    while (*str)
    {
        if (ft_is_printable(*str))
            ft_putchar(*str);
        else
        {
            ft_putchar('\\');
            ft_putchar('0');
            ft_putnbr_hex(*str);
        }
        str++;
    }
}
