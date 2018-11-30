#include <unistd.h>
void ft_foreach(int *tab, int length, void(*f)(int));

void ft_putchar(int c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
    }

    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
        ft_putchar(nbr + '0');
}

int main()
{
    int numbers[] = {23, 5, -65, 8467, 234, 90};
    ft_foreach(numbers, 6, ft_putnbr);

    return 0;
}
