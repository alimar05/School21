#include "includes/ft.h"

void do_op(int argc, char **argv)
{
    if (argc == 4)
    {
        int a;
        int b;

        a = ft_atoi(argv[1]);
        b = ft_atoi(argv[3]);

        if (*argv[2] == '+')
            ft_putnbr(a + b);
        else if (*argv[2] == '-')
            ft_putnbr(a - b);
        else if (*argv[2] == '*')
            ft_putnbr(a * b);
        else if (*argv[2] == '/')
            ft_putnbr(a / b);
        else if (*argv[2] == '%')
            ft_putnbr(a % b);
        else
            write(1, "0", 1);

	    write(1, "\n", 1);
    }
}

int main(int argc, char **argv)
{
    if (*argv[2] == '/' & *argv[3] == '0')
        write(1, "Stop : division by zero\n", 24);
    else if (*argv[2] == '%' & *argv[3] == '0')
        write(1, "Stop : modulo by zero\n", 22);
    else
        do_op(argc, argv);

    return 0;
}
