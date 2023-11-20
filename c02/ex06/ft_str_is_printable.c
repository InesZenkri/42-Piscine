//check man isspace(3)
int	is_printable(char c)
{
	if (c == ' '|| c == '\f'|| c == '\v' || c == '\n' || c == '\r' || c == '\t')
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_printable(str[i])))
			return (0);
		i++;
	}
	return (1);
}
/*
main for it :
int main(void)
{
    char str1[] = "Hello, this is a printable string!"; 
    char str2[] = "Some non-printable characters: \t\b"; 
    int result1 = ft_str_is_printable(str1);
    int result2 = ft_str_is_printable(str2);
    ft_putnbr(result1);
    write(1, "\n", 1);
    ft_putnbr(result2);
    write(1, "\n", 1);
}
expected output :
1
0
*/
