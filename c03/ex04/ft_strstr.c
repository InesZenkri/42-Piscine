char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);

	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
//second way with pointers :
char *ft_strstr(char *str, const char *to_find)
{
    char *start;
    const char *c;

    if (*to_find == '\0') 
        return str; 
    while (*str != '\0')
    {
        start = str; 
        c = to_find;
        while (*str != '\0' && *c != '\0' && *str == *c)
        {
            str++;
            c++;
        }
        if (*c == '\0') 
            return (start);
        str = start + 1;
    }
    return (0);
}

