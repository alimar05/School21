void ft_sort_integer_table(int *tab, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (*(tab + i) > *(tab + j))
            {
                temp = *(tab + i);
                *(tab + i) = *(tab + j);
                *(tab + j) = temp;
            }
            j++;
        }
        i++;
    }
}
