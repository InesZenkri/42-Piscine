void ft_div_mod(int a, int b, int *div, int *mod) {
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

/*
main for it :
don't forget to include #include <unistd.h> !
int main() {
    int dividend = 10;
    int divisor = 3;
    int quotient, remainder;

    Call the ft_div_mod function to calculate division and remainder:
    ft_div_mod(dividend, divisor, &quotient, &remainder);

    Display the results:
    write(1, "Dividend: ", 10);
    ft_putnbr(dividend);
    write(1, ", Divisor: ", 12);
    ft_putnbr(divisor);
    write(1, "\n", 1);

    Check for division by zero:
    if (divisor != 0) {
        write(1, "Quotient: ", 11);
        ft_putnbr(quotient);
        write(1, ", Remainder: ", 14);
        ft_putnbr(remainder);
        write(1, "\n", 1);
    } else {
        write(1, "Error: Division by zero\n", 25);
    }

    return 0;
}
*/