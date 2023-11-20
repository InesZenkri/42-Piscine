#include <unistd.h>
/* now you are getting familliar with the syntax so try to understand it alone ;) */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
void print_combination(char a, char b, char c) :
Accepts three characters representing digits (a, b, c) and prints them as a combination.
Converts each character to its corresponding digit by adding '0' to the character and then printing it using ft_putchar.
If the combination reaches '789' (a == 7, b == 8, c == 9), the function returns, avoiding printing a comma and space after the last combination.
*/
void	print_combination(char a, char b, char c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (a == 7 && b == 8 && c == 9)
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
}
/*
void ft_print_comb(void) :
Initializes three integer variables, a, b, and c, each representing a digit.
Uses nested loops to generate combinations:
The outer loop (a) goes from 0 to 7.
The middle loop (b) starts from a + 1 to 8.
The inner loop (c) starts from b + 1 to 9.
Inside the innermost loop, it calls print_combination to print each combination of three digits.
The loops ensure that the combinations are printed in ascending order without repetition (e.g., 012, 013, 014...).
*/
void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_combination(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}


/*
main function for it :
int main() {
    ft_print_comb();
    write(1, "\n", 1); // Print a newline character after printing the combinations
    return 0;
}
expected output :
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789

*/