int fact(int n)
{
    int f;

    f = 1;
    while (n != 1)
    {
        f *= n--;
    }

    return f;
}
