#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
void ft_convert_to_hexabase(unsigned char c):
Converts an unsigned character c to its hexadecimal representation and prints it.
It uses an array hexabase to map values to their hexadecimal equivalents.
*/
void	ft_convert_to_hexabase(unsigned char c)
{
	char	*hexabase;

	hexabase = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hexabase[c / 16]);
		ft_putchar(hexabase[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexabase[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_convert_to_hexabase(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
/*
main for it :
int main()
{
    char str[] = "Hello\tWorld\nThis is a test\x07string\x1F with non-printable characters.";

    ft_putstr("Original string: ");
    ft_putstr(str);
    ft_putchar('\n');

    ft_putstr("Processed string: ");
    ft_putstr_non_printable(str);
    ft_putchar('\n');
}
expected output :
Original string: Hello	World
This is a teststring with non-printable characters.
Processed string: Hello\tWorld\nThis is a test\x07string\x1F with non-printable characters.

this output shows the original string, printing non-printable characters using escape sequences (\t for tab, \n for newline) and their hexadecimal representations (e.g., \x07 for ASCII character 7, \x1F for ASCII character 31).






*/