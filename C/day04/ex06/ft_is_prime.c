int ft_is_prime(int nb)
{
    int i;
    int count;

    if (nb == 0 | nb == 1)
        return 0;
    
    i = 2;
    count = 0;
    while (i <= nb)
    {
        if (nb % i++ == 0)
        {
            count++;
            if (count > 1)
                return 0;
        }
    }

    return 1;
}
