/*
-This ft_ft function is a simple function that takes a pointer to an integer (int *nbr) and sets the value at that memory location to 42.
-Sadly you have to check what pointers are and what they do on your own ;)
*/
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
main for it :
don't forget to #include <unistd.h> !
int main() {
    int number = 0;
    Display the initial value of the variable:
    write(1, "Before: ", 8);
    ft_putnbr(number); we did it before ;)
    write(1, "\n", 1);

    Call the ft_ft function to modify the value through a pointer:
    ft_ft(&number);

    Display the modified value after the function call:
    write(1, "After: ", 7);
    print_number(number);
    write(1, "\n", 1);

    return 0;
}
expected output :
Before: 0
After: 42
*/
