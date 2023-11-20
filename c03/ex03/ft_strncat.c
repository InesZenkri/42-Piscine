int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	if (nb < 1)
		return (dest);
	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
//second way with pointers :
char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
    char *result; 

    result = dest; 
    while (*dest != '\0')
        dest++;
    while (*src != '\0' && nb > 0)
    {
        *dest = *src;
        dest++;
        src++;
        nb--;
    }
    *dest = '\0';
    return (result); 
}
