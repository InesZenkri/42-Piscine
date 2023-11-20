//check man strlcpy ;)
/*
If the provided size argument is less than 1, indicating that dest has no space, the function returns the length of src (count) without copying anything to avoid buffer overflow
After copying characters, the function adds the null terminator '\0' to the end of the dest string
The function returns the length of the source string src (count). This return value indicates the total length of the string that was intended to be copied to dest
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (count);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
/*
main for it :
int main() {
    char source[] = "This is a source string.";
    char destination[20];

    unsigned int copied_length;

	copied_length= ft_strlcpy(destination, source, sizeof(destination));
    ft_putstr("Copied string:");
	ft_putstr(destination);
	ft_putchar("\n");
    ft_putstr("Length of the copied string:");
	ft_putchar("\n");
	ft_putnbr(copied_length);
}
expected output :
Copied string: This is a source st
Length of the copied string: 22
*/