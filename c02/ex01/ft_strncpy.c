//check man
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
main for it :
int main(void)
{
    char src[] = "Hello, World!"; 
    char dest[20]; 
    ft_strncpy(dest, src, 7);
    ft_putstr(dest);
}
expected output : Hello,
*/