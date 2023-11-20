int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//second way with pinters :
int ft_strlen(char *str)
{
    char *ptr;

    ptr = str;
    while (*ptr != '\0')
        ptr++;

    return (ptr - str);
}
