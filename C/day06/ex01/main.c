#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    while (*argv[0])
    {
        ft_putchar(*argv[0]);
        argv[0]++;
    }
    ft_putchar('\n');

    return 0;
}
