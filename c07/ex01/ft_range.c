#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *ptr;
    int size;
    int *array;

    if (min >= max) 
        return NULL;
    
    size = max - min;
    array = (int *)malloc(sizeof(int) * size);
    if (!array) 
        return NULL; 
    ptr = array;
    while (min < max)
    {
        *ptr = min;
        ptr++;
        min++;
    }
    return (array);
}
