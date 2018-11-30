int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int i;
    int j;
    int res1;
    int res2;

    i = 0;
    res1 = 0;
    res2 = 0;
    while (i < length - 1)
    {
        if (f(tab[i], tab[i + 1]))
            res1 = f(tab[i], tab[i + 1]);
        j = 1;
        while (j < length - 1)
        {
            if (f(tab[j], tab[j + 1]))
                res2 = f(tab[j], tab[j + 1]);
            if (res1 * res2 < 0)
                return 0;
            j++;
        }
        i++;
    }

    return 1;
}
