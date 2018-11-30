void ft_putchar(char c);

void ft_print_comb(void)
{
	for (char i = '0'; i <= '9'; i++)
	{
		for (char j = i + 1; j <= '9'; j++)
		{
			for (char k = j + 1; k <= '9'; k++)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				
				if (i != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
