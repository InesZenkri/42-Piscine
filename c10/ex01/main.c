#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 30000 // 30 KB

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int main(int ac, char *av[])
{
    if (ac < 2)
    {
        write(2, "Usage: ", 7);
        write(2, av[0], ft_strlen(av[0]));
        write(2, " <file1> <file2> ...\n", 21);
        return (1);
    }

    char buffer[BUFFER_SIZE];
    int i;
    int fd;
    ssize_t bytes_read;
    
    i = 1;
    while (av[i] != NULL)
    {
        fd = open(av[i], O_RDONLY);
        if (fd == -1)
        {
            perror("Error opening file");
            return (1);
        }
        while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
        {
            if (write(1, buffer, bytes_read) != bytes_read)
            {
                perror("Error writing to stdout");
                close(fd);
                return (1);
            }
        }

        if (bytes_read == -1)
        {
            perror("Error reading file");
            close(fd);
            return (1);
        }

        if (close(fd) == -1)
        {
            perror("Error closing file");
            return (1);
        }

        i++;
    }
    return (0);
}
