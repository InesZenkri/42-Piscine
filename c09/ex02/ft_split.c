#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	is_a_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	total_strings(char *str, char *charset)
{
	int	i;
	int	strings;

	strings = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_a_sep(str[i + 1], charset) == 1
			&& is_a_sep(str[i], charset) == 0)
			strings++;
		i++;
	}
	return (strings);
}

void	ft_strcpy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (is_a_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	split_strings(char **array, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_a_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_a_sep(str[i + j], charset) == 0)
				j++;
			array[word] = (char *)malloc(sizeof(char) * (j + 1));
			ft_strcpy(array[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		strings;

	strings = total_strings(str, charset);
	array = (char **)malloc(sizeof(char *) * (strings + 1));
	array[strings] = 0;
	split_strings(array, str, charset);
	return (array);
}