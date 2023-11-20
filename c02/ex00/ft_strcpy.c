/*
check man strcpy 
man is always helpful ;)
*/
char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// second way to do it with pointers:
char    *ft_strcpy(char *dest, char *src)
{
    char *origdest ;

    origdest = dest;
    while (*src != '\0') // or just while (*src) it's the same
    {
        *dest = *src; 
        dest++;       
        src++;        
    }

    *dest = '\0'; 
    return (origdest);
}
/*
main for it :
int main(void)
{
    char src[] = "Hello, World!"; 
    char dest[20]; 

    // Copy the string from src to dest using ft_strcpy
    ft_strcpy(dest, src);

    // Display the copied string (dest) we did it before in c01
    ft_putstr(dest);

    return (0); it implicitly returns 0, indicating successful execution. Therefore, the return 0; statement at the end of main is optional
}
*/
