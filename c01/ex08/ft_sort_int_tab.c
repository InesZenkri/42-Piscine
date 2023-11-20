void	swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0 && *(tab + j - 1) > *(tab + j))
		{
			swap(tab + j, tab + j - 1);
			j--;
		}
		i++;
	}
}
//second way using bubble sort
void ft_sort_int_tab(int *tab, int size)
{
    int swapped;
    int i;
    int temp ;

    swapped = 1;
    while (swapped) {
        swapped = 0;
        i = 0;
        while (i < size - 1) {
            if (tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                swapped = 1;
            }
            i++;
        }
        size--; 
    }
}

/*
main for it :
don't forget to include #include <unistd.h> !
void print_array(int *array, int size)
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

int main()
{
    int array[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    Display the original array :
    write(1, "Original array: ", 16);
    print_array(array, size);

    Call the function to sort the array :
    ft_sort_int_tab(array, size);

    Display the sorted array :
    write(1, "Sorted array: ", 14);
    print_array(array, size);

    return 0;
}
*/