int ft_iterative_factorial(int nb)
{
    int fac;

    if (nb <= 0)
        return 0;

    fac = nb;
    while (nb > 1)
        fac = fac * --nb;

    return fac;
}
