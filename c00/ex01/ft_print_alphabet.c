/*
from now on ill be only using the vscode and not the terminal !
dont forget to use the header in the top on the code !
*/
#include <unistd.h>
/*
void ft_print_alphabet(void): Defines a function named ft_print_alphabet that doesn't take any arguments (void), and it also doesn't return any value (void).
int i;: Declares an integer variable i which will be used as a counter to represent the ASCII values of lowercase letters.
i = 'a';: Initializes i with the ASCII value of the lowercase letter 'a'.
while (i <= 'z'): Starts a loop that continues as long as the value of i is less than or equal to the ASCII value of 'z', which represents the end of the alphabet
i++;: Increments i to move to the next character in the ASCII sequence.

*/
void	ft_print_alphabet(void) 
{
	int	i;

	i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}


/*main for this function : 

int main(void)
{
    ft_print_alphabet();
    write(1, "\n", 1); Print a newline character after printing the alphabet
    return 0;
}

expected output : abcdefghijklmnopqrstuvwxyz
*/
