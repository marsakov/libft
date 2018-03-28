/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakovyc <msakovyc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:51:24 by msakovyc          #+#    #+#             */
/*   Updated: 2018/03/27 22:15:06 by msakovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char		**arr;
	size_t		counter;
	size_t		i;

	if (!s)
		return (0);
	i = 0;
	counter = 0;
	while (*(s + i))
		if (*(s + i++) == c)
			counter++;
	arr = (char **)malloc(sizeof(char) * (ft_strlen(s) - counter + 1));
	if (!arr)
		return (0);
	i = 0;
	counter = 0;
	while (*s)
	{
		if (*s != c)
			arr[i][counter++] = *s;
		else
			i++;
		s++; 
	}
	return (arr);
}
