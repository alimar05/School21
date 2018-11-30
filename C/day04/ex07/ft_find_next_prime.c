int ft_is_prime(int nb);

int ft_find_next_prime(int nb)
{
    while (!ft_is_prime(nb))
        nb++;

    return nb;
}
