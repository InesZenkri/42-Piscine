void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
main for it :
don't forget to include #include <unistd.h> !
int main() {
    int number1 = 5;
    int number2 = 10;

    Display the initial values :
    write(1, "Before: number1 = ", 19);
    ft_putnbr(number1);
    write(1, ", number2 = ", 13);
    ft_putnbr(number2);
    write(1, "\n", 1);

    Call the ft_swap function to swap the values:
    ft_swap(&number1, &number2);

    Display the values after the swap:
    write(1, "After: number1 = ", 18);
    ft_putnbr(number1);
    write(1, ", number2 = ", 12);
    ft_putnbr(number2);
    write(1, "\n", 1);

    return 0;
}
expected output :
Before: number1 = 5, number2 = 10
After: number1 = 10, number2 = 5
*/