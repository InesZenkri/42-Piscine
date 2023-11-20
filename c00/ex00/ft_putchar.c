#include <unistd.h>//#include <unistd.h>: This line includes the unistd.h header, providing access to the write function used later in the code

/*
-void indicates that the function ft_putchar does not return any value.
-t_putchar is the name of the function.
-ft_putchar takes a single parameter of type char (character).
-{ }: These curly braces enclose the body of the function.
-write(1, &c, 1): This line uses the write function to output the character c to the standard output (1 is the file descriptor for standard output). The second argument, &c, is the address of the character c, and the third argument, 1, is the number of bytes to write (in this case, one character).
-in order to be able to use the write function we have to include <unistd.h> !
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}


/* main funtion tp run the code :
int main() {
    ft_putchar('H');
    ft_putchar('e');
    ft_putchar('l');
    ft_putchar('l');
    ft_putchar('o');
    ft_putchar(',');
    ft_putchar(' ');
    ft_putchar('W');
    ft_putchar('o');
    ft_putchar('r');
    ft_putchar('l');
    ft_putchar('d');
    ft_putchar('!');
    ft_putchar('\n');

    return 0;
}
expected output : 'Hello, World!'
*/
