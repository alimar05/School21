void ft_putchar(char c);
void ft_putstr(char *str);
int ft_strcmp(char *s1, char *s2);

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;
    char *temp;

    i = 1;
    while (i < argc)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[i], argv[j]) > 0)
            {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
            j++;
        }
        i++;
    }
    
    k = 1;
    while (k < argc)
    {
        ft_putstr(argv[k++]);
        ft_putchar('\n');
    }
}
