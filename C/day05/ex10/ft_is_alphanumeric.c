int ft_is_capital_letter(char *str);
int ft_is_small_letter(char *str);
int ft_is_digit(char *str);

int ft_is_alphanumeric(char *str)
{
    if (ft_is_capital_letter(str) | ft_is_small_letter(str) | ft_is_digit(str))
        return 1;
    else
        return 0;
}
