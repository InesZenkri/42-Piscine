//check man ascii
char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
main for it :
int main(void)
{
    char str1[] = "Hello, World!"; 
    char str2[] = "!(coding is FUN)"; 

    write(1, "Original String 1: ", 20);
    ft_putstr(str1);
    write(1, "\n", 1);

    write(1, "Uppercase String 1: ", 21);
    ft_putstr(ft_strupcase(str1));
    write(1, "\n", 1);

    write(1, "Original String 2: ", 20);
    ft_putstr(str2);
    write(1, "\n", 1);

    write(1, "Uppercase String 2: ", 21);
    ft_putstr(ft_strupcase(str2));
    write(1, "\n", 1);
}
expected output :
Original String 1: Hello, World!
Uppercase String 1: HELLO, WORLD!
Original String 2: !(coding is FUN)
Uppercase String 2: !(CODING IS FUN)
*/