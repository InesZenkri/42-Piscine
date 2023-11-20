//check man
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
//second way of doing it wih pointers :
int ft_strncmp_pointer(char *s1, char *s2, unsigned int n)
{
    if (n == 0)
        return (0);
    while (*s1 == *s2 && *s1 != '\0' && n > 1)
    {
        s1++;
        s2++;
        n--;
    }
    return (*s1 - *s2);
}
/*
main for it :
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hell";

    ft_putstr("Comparison result: ");
    ft_putnbr(ft_strncmp_pointer(str1, str2, 4));
}
expected output :
Comparison result: 0
*/
