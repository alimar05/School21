int ft_is_alphanumeric(char *c);
int ft_is_duplicate(char *c, char *str);

int ft_is_base(char *base)
{
    int i;
    int result;

    i = 0;
    while (*(base + i))
    {
        if (ft_is_alphanumeric(base + i))
        {
            if (!ft_is_duplicate(base + i, base))
                result = 1;
            else
                return 0;
        }
        else
            return 0;
        i++;
    }

    if (i > 1)
        return result;
    else
        return 0;
}
