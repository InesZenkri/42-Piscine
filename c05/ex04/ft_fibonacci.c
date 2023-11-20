int	ft_fibonacci(int index)
{
	int	value;

	if (index <= 0)
		return (-1);
	if (index == 1)
		return (1);
	else
	{
		value = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (value);
	}
}
// second way without recursion just to understand the concept :
int ft_fibonacci(int index)
{
    int prev1;
    int prev2;
    int fib;
    int i;
    if (index <= 0)
        return (-1);
    if (index == 1 || index == 2)
        return (1);

    prev1 = 1;
    prev2 = 1;
    fib = 0;
    i = 3;
    while (i <= index)
    {
        fib = prev1 + prev2;
        prev1 = prev2;
        prev2 = fib;
        i++;
    }

    return (fib);
}
