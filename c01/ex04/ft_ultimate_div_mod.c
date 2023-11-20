void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = i / *b;
	*b = i % *b;
}

/*
main for it :
don't forget to include #include <unistd.h> !
int main() {
    int dividend = 10;
    int divisor = 3;

    Display the initial values:
    write(1, "Before: Dividend = ", 20);
    ft_putnbr(dividend);
    write(1, ", Divisor = ", 13);
    ft_putnbr(divisor);
    write(1, "\n", 1);

    Call the ft_ultimate_div_mod function to calculate division and remainder:
    ft_ultimate_div_mod(&dividend, &divisor);

    Display the results:
    write(1, "After: Quotient = ", 19);
    ft_putnbr(dividend);
    write(1, ", Remainder = ", 15);
    ft_putnbr(divisor);
    write(1, "\n", 1);

    return 0;
}
*/