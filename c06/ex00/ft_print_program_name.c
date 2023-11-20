#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc > 0)
	{
		while (argv[0][j] != '\0')
		{
			ft_putchar(argv[0][j]);
			j++;
		}
		ft_putchar('\n');
	}
}