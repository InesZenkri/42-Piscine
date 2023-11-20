int	is_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(is_alpha(str[i])))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    int result1 = ft_str_is_alpha("42_School");
    int result2 = ft_str_is_alpha("BestSchool");
    ft_putnbr(result1);
    write(1, "\n", 1);
    ft_putnbr(result2);
    write(1, "\n", 1);
}
expected putput :
0
1
*/