int array_int_sum(int *str, int len)
{
    int sum;
    int i;

    i = 0;
    sum = 0;
    while (i != len)
        sum = sum + *(str + i++);

    return sum;
}
