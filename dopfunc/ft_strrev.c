
#include "libft.h"

char *ft_strrev(char *s)
{
	int		i;
	int		len;
	char	*rev;

	i = 0;
	len = ft_strlen(s);
	if (!(rev = (char *)malloc(sizeof(char) * len)))
		return (0);
	while (i < len)
	{
		rev[i] = s[len - 1 - i];
		i++;
	}
	return (rev);
}
