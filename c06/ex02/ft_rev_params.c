#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    if (argc > 1) {
        char **ptr; 

        ptr = argv + argc - 1; 
        while (ptr > argv)
        {
            ft_putstr(*ptr);
            write(1, "\n", 1);
            ptr--;
        }
    }
}
