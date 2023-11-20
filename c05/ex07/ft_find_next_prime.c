int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
    if (nb == 2)
        return (1);
    if (nb % 2 == 0)
        return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2 ;
	}
	return (1);	
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i < 2)
		return (2);
    if (nb % 2 == 0)
        i = nb + 1;
	while (!ft_is_prime(i))
		i+=2;
	return (i);
}