#include <unistd.h>

void	print_number(char c)
{
	write(1, &c, 1);
}
/*
-int i : This is declaration of my variable : Type then name of var
-i = 0;: This initializes a variable i to 0.
-while (i <= 9) { ... }: This is a loop that iterates from 0 to 9 (inclusive).
-print_number(i + '0');: This line converts the current value of i to its corresponding character representation ('0' to '9') and prints it using the print_number function.
*/
void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		print_number(i + '0');
		i++;
	}
}


/*
main function for it : 
int main() {
    write(1, "Numbers: ", 9); Print a label before the numbers
    ft_print_numbers(); calling my function
    write(1, "\n", 1);Print a newline character after printing the numbers
    return 0;
}
expected output : 'Numbers: 0123456789'
*/
