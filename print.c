void ft_putchar(char c);
void print_stars(int n)
{
	int i;
	int j;
	i = 1;
	j = 1;
	while (	j <= n)
	{
		while(i <= n)
		{
			ft_putchar('*');
			ft_putchar(' ');
			i++;
		}
		i = 1;
		ft_putchar('\n');
		j++;

	}
}
