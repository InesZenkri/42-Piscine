//check man
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
//second way using pointers :
int ft_strcmp(char *s1, char *s2)
{
    while (*s1 == *s2 && *s1 != '\0')
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
//third way using recursion :
int ft_strcmp_recursive(char *s1, char *s2)
{
    if (*s1 != *s2 || *s1 == '\0') 
        return (*s1 - *s2);
    return ft_strcmp_recursive(s1 + 1, s2 + 1);
}

int ft_strcmp(char *s1, char *s2)
{
    return ft_strcmp_recursive(s1, s2);
}
/*
main for it :
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "World";

    ft_putstr("Comparison result: ");
    ft_putnbr(ft_strcmp(str1, str2));
    ft_putchar('\n');
}
expected output :
Comparison result: -15
the result comes from : 72 - 87 ('H' - 'W')
*/


