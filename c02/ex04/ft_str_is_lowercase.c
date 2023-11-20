int	is_lower(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}
int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(is_lower(str[i])))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    int result1 = ft_str_is_lowercase("lowercase");
    int result2 = ft_str_is_lowercase("MixedCase");
    ft_putnbr(result1);
    write(1, "\n", 1);
    ft_putnbr(result2);
    write(1, "\n", 1);
}
exptected output :
1
0
*/
