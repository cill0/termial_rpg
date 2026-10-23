void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
		i++;
	write(1, str, i);
}