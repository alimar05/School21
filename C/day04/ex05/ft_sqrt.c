int ft_sqrt(int nb)
{
    int result;
    int i;

    if (nb == 0)
        return 0;
   
    i = 0;
    result = 0;
    while (nb != result)
    {
        i++;
        result = i * i;

        if (nb < result)
            return 0;
    }

    return i;
}
