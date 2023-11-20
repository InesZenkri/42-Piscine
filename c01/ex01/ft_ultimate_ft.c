void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}


/*
main for it :
don't forget to include #include <unistd.h> !
int main() {
    int number = 0;
    int *pointer1 = &number;
    int **pointer2 = &pointer1;
    int ***pointer3 = &pointer2;
    int ****pointer4 = &pointer3;
    int *****pointer5 = &pointer4;
    int ******pointer6 = &pointer5;
    int *******pointer7 = &pointer6;
    int ********pointer8 = &pointer7;
    int *********pointer9 = &pointer8;

    Display the initial value of the variable:
    write(1, "Before: ", 8);
    ft_putnbr(number);
    write(1, "\n", 1);

    Call the ft_ultimate_ft function to modify the value through a chain of pointers
    ft_ultimate_ft(pointer9);

    Display the modified value after the function call
    write(1, "After: ", 7);
    ft_putnbr(number);
    write(1, "\n", 1);

    return 0;
}
expected output :
Before: 0
After: 42
*/