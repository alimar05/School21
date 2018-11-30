int ft_is_printable(char c)
{
    if (c >= 0x20 & c <= 0x7e)
        return 1;
    else
        return 0;
}
