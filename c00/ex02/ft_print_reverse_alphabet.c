#include <unistd.h>
//same logic reversed 
void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 'z';
	while (i >= 'a')
	{
		write(1, &i, 1);
		i--;
	}
}

/*
int main(void)
{
    ft_print_reverse_alphabet();
    write(1, "\n", 1); Print a newline character after printing the alphabet
    return 0;
}
*/