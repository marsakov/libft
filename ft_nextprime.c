#include "libft.h"

int		ft_nextprime(int n)
{
	n++;
	while (!ft_isprime(n))
		n++;
	return (n);
}