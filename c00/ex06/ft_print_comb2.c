#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
void ft_int_to_char(int i):
Accepts an integer i and converts it into its character representation.
If i is less than 10, it adds '0' to print a leading zero followed by the digit (for values 0-9).
Otherwise, it separates the tens and ones digits, converting each into its character representation and printing them.
*/
void	ft_int_to_char(int i)
{
	int	tens;
	int	ones;

	if (i < 10)
	{
		ft_putchar('0');
		ft_putchar(i + '0');
	}
	else
	{
		tens = i / 10;
		ones = i % 10;
		ft_putchar(tens + '0');
		ft_putchar(ones + '0');
	}
}
/*
void ft_print_comb2(void)
Initializes two integer variables, i and j, each representing a two-digit number.
Uses nested loops to generate pairs of two-digit numbers:
The outer loop (i) goes from 0 to 99.
The inner loop (j) starts from i + 1 to 99.
Inside the inner loop, it uses ft_int_to_char to print each two-digit number represented by i and j, separated by a space.
Additionally, after printing j, if i is less than 98, it prints a comma and a space to separate the pairs.
*/
void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_int_to_char(i);
			ft_putchar(' ');
			ft_int_to_char(j);
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

/*
main for it :
int main() {
    ft_print_comb2();
    return 0;
}
see its getting easier ;)
*/