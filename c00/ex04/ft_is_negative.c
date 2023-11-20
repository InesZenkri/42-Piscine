#include <unistd.h>

/*
if (n >= 0) { ... } else { ... }: This is an if-else statement that checks if n is non-negative. If true, it prints 'P'; otherwise, it prints 'N'.
*/
void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

/*
main function for it :
int main() {
    write(1, "Test with -5: ", 15);
    ft_is_negative(-5);
    write(1, "\n", 1);

    write(1, "Test with 10: ", 14);
    ft_is_negative(10);
    write(1, "\n", 1);
    return 0;
}

exptected output : 
Test with -5: N
Test with 10: P
*/