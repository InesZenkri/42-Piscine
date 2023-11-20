// check man atoi
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
void ft_putnbr(int nb):
Prints an integer nb to the standard output.
Handles a special case for the minimum integer value (-2147483648) due to its unique representation in 32-bit signed integers (check INT_MIN).
It manually prints the individual digits of this value since direct conversion to a positive integer doesn't work.
Checks if nb is negative. If so, prints a '-' sign and makes nb positive for processing.
Divides nb by 10 recursively to separate digits for printing using ft_putchar.
For each digit, it converts it to its ASCII representation by adding 48 ('0') and prints it using ft_putchar
*/
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

/*
main for it :
int main() {
    int number1 = 12345;
    int number2 = -6789;
    int number3 = -2147483648;

    ft_putnbr(number1);
    ft_putchar('\n');

    ft_putnbr(number2);
    ft_putchar('\n');

    ft_putnbr(number3);
    ft_putchar('\n');

    return 0;
}
expected output : 
12345
-6789
-2147483648
*/
