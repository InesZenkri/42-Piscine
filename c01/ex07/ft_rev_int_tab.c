void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
		i++;
	}
}
//second way to do it with pointers :
void ft_rev_int_tab(int *tab, int size)
{
    int *start;
    int *end;
    int temp;

    start = tab;
    end = tab + size - 1;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

/*
main for it :
don't forget to include #include <unistd.h> !
void ft_putarray(int *array, int size)
{
    int i = 0;
    while (i < size)
    {
        Convert integer to string and write to standard output :
        int num = array[i];
        Convert the digit to its character representation :
        char digit = num + '0'; 
        write(1, &digit, 1);

        Add space after each number except the last one :
        if (i < size - 1)
        {
            write(1, " ", 1);
        }

        i++;
    }
    write(1, "\n", 1);
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    Display the original array :
    write(1, "Original array: ", 16);
    ft_putarray(array, size);

    Call the function to reverse the array :
    ft_rev_int_tab(array, size);

    Display the reversed array :
    write(1, "Reversed array: ", 16);
    ft_putarray(array, size);

    return 0;
}
expected output :
Original array: 1 2 3 4 5
Reversed array: 5 4 3 2 1

*/
