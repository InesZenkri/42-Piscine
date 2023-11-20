/*
For each character:
If new_word is 1 (indicating the start of a new word) and the current character is a lowercase letter (c >= 'a' && c <= 'z'), it is converted to uppercase by subtracting 32 from its ASCII value (str[i] = str[i] - 32).
If new_word is 0 (indicating subsequent characters within a word) and the current character is an uppercase letter (c >= 'A' && c <= 'Z'), it is converted to lowercase by adding 32 to its ASCII value (str[i] = str[i] + 32).
Determining Word Boundaries:
The flag new_word is updated based on character checks. If the character is neither an uppercase nor a lowercase letter nor a digit, it signifies the end of a word, and new_word is set to 1. Otherwise, new_word is set to 0.
*/
char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char		    c;
	int		        new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (new_word == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (new_word == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))) 
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
/*
main for it :
int main(void)
{
    write(1, "Original String 1: ", 20);
    ft_putstr("hello, world!");
    write(1, "\n", 1);

    write(1, "Capitalized String 1: ", 22);
    ft_putstr(ft_strcapitalize("hello, world!"));
    write(1, "\n", 1);

    write(1, "Original String 2: ", 20);
    ft_putstr("coDIng at 42iS FuN.");
    write(1, "\n", 1);

    write(1, "Capitalized String 2: ", 22);
    ft_putstr(ft_strcapitalize("coDIng at 42iS FuN."));
    write(1, "\n", 1);
}
expected output :
Original String 1: hello, world!
Capitalized String 1: Hello, World!
Original String 2: coDIng at 42iS FuN.
Capitalized String 2: Coding At 42is Fun.
*/
