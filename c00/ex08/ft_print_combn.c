#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
void ft_puttab(int nb, int *tab, int pos):
Prints the content of the integer array tab containing nb elements.
If pos is 1, it prints a comma and a space before the output.
*/
void	ft_puttab(int nb, int *tab, int pos)
{
	int i;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < nb)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}
/*
void ft_putcom_ascen(int nb, int *tab):
Manipulates the tab array to generate the next ascending combination after the current one.
Finds the position to increment by locating the rightmost digit that is not at its maximum value.
Increments that position and sets subsequent digits to follow in ascending order.
*/
void	ft_putcom_ascen(int nb, int *tab)
{
	int i;
	int max;

	i = nb - 1;
	max = 9;
	while (tab[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	tab[i] += 1;
	while (i < nb)
	{
		tab[i + 1] = tab[i] + 1;
		i += 1;
	}
}
/*
void ft_print_combn(int nb):
Generates and prints all combinations of nb numbers.
Initializes an integer array tab from 0 to nb - 1.
Prints the initial combination using ft_puttab.
Enters a loop to generate subsequent combinations until the last combination is reached.
Checks if the rightmost digit is at its maximum value (9), if not, increments it; otherwise, uses ft_putcom_ascen to generate the next ascending combination.
Prints each new combination using ft_puttab
*/
void	ft_print_combn(int nb)
{
	int tab[10];
	int i;

	i = 0;
	while (i < nb)
	{
		tab[i] = i;
		i++;
	}
	ft_puttab(nb, tab, 0);
	while (tab[0] != 10 - nb || tab[nb - 1] != 9)
	{
		if (tab[nb - 1] != 9)
		{
			tab[nb - 1] += 1;
		}
		else
		{
			ft_putcom_ascen(nb, tab);
		}
		ft_puttab
	(nb, tab, 1);
	}
}

/*
main for it :
int main() {
    int n = 3;  // Change this value to test with different values of n
    ft_print_combn(n);
    ft_putchar('\n');

    return 0;
}
expected output :
012, 013, 014, ..., 789
*/
