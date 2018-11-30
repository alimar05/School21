int sign_check(char *str)
{
    if (*str == '-')
        return -1;
    else
        return 1;

    if (*str < '0' | *str > '9')
        return 2;
}
