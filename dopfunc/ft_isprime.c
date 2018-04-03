int		ft_isprime(int n)
{
	int i;

	if (n == 1 || n == 2 || n == 3)
		return (1);
	i = 2;
	while (i < n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}