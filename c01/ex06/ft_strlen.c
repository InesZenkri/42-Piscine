int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//second way to do it with pinters :
int ft_strlen(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
        ptr++;
    return (ptr - str);
}
//third way to do it with recursion :
int ft_strlen_recursive(char *str)
{
    if (*str == '\0')
        return 0;
    return (1 + ft_strlen_recursive(str + 1));
}

/*
main for it :
int main() {
    char message[] = "Hello, world!";

    Call the ft_strlen function to get the length of the string :
    int length = ft_strlen(message);

    Display the result :
    write(1, "Length of the string: ", 23);
    ft_putnbr(length);
    write(1, "\n", 1);

    return 0;
}
expected output :
Length of the string: 13
*/
