/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakovyc <msakovyc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 16:34:46 by msakovyc          #+#    #+#             */
/*   Updated: 2018/03/27 17:31:31 by msakovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, char *needle, size_t len)
{
	char	*temp_needle;
	int		i;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	temp_needle = (char *)needle;
	while (*haystack && len)
	{
		needle = temp_needle;
		i = 0;
		if (*(haystack) == needle[0])
		{
			while (*(haystack + i) == *needle)
			{
				len--;
				i++;
				needle++;
				if (*needle == '\0')
					return ((char *)haystack);
			}
		}
		len--;
		haystack++;
	}
	return (0);
}
