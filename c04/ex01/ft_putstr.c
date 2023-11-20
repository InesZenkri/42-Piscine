#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
//second way with pointers :
void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++; 
    }
}
