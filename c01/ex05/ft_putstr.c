#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}
//second way to do it with pointer :
void ft_putstr(char *str)
{
    while (*str != '\0')
	{
        write(1, str, 1);
        str++;
    }
}
//third way to do it with recursion :
void ft_putstr(char *str)
{
    if (*str != '\0')
	{
        write(1, str, 1);
        ft_putstr(str + 1);
    }
}



/*
main for it :
int main() {
    char message[] = "Hello, world!";

    Call the ft_putstr function to print the string :
    ft_putstr(message);

    return 0;
}
expected output :
Hello, world!
*/