int	is_numeric(char c)
{
	return ((c >= '0') && (c <= '9'));
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(is_numeric(str[i])))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    int result1 = ft_str_is_numeric("12345");
    int result2 = ft_str_is_numeric("abc123");
    ft_putnbr(result1);
    write(1, "\n", 1);
    ft_putnbr(result2);
    write(1, "\n", 1);
}
expected putput :
1
0
*/