int	is_upper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_upper(str[i])))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    int result1 = ft_str_is_uppercase("UPPERCASE");
    int result2 = ft_str_is_uppercase("MixedCASE");
    ft_putnbr(result1);
    write(1, "\n", 1);
    ft_putnbr(result2);
    write(1, "\n", 1);
}
expected output :
1
0
*/