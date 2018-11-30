int number_length(int nb)
{  
    int length;

    length = 0;
    while (nb != 0)
    {
        nb /= 10;
        length++;
    }

    return length;
}
