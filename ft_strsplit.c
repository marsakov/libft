/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakovyc <msakovyc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:51:24 by msakovyc          #+#    #+#             */
/*   Updated: 2018/03/29 15:34:07 by msakovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_words_counter(const char *s, char c)
{
	size_t		i;
	size_t		word_counter;

	word_counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c  && (!s[i + 1]  || s[i + 1] == c))
			word_counter++;
		i++;
	}
	return (word_counter);
}

static char	**ft_allmem(char **arr, char const *s, char c, size_t word_counter)
{
	int			i_word;
	size_t		i;
	size_t		counter;

	i = 0;
	i_word = 0;
	counter = 1;
	arr = (char **)malloc(sizeof(char *) * (word_counter));
	if (!arr)
		return (0);
	i = 0;
	while (s[i] && word_counter)
	{
		if (s[i] != c)
		{
			if (!s[i + 1] || s[i + 1] == c)
			{
				arr[i_word] = (char *)malloc(sizeof(char) * (counter + 1));
				if (!arr[i_word])
					return (0);
				word_counter--;
				counter = 0;
				i_word++;
			}
			counter++;
		}
		i++;
	}
	return (arr);
}

char	**ft_strsplit(char const *s, char c)
{
	int			i_word;
	int			i_alp;
	char		**arr;
	size_t		word_counter;

	if (!s)
		return (0);
	i_word = 0;
	i_alp = 0;
	word_counter = ft_words_counter(s, c);
	arr = 0;
	arr = ft_allmem(arr, s, c, word_counter);
	if (!arr)
		return (0);
	while (*s && word_counter)
	{
		if (*s != c)
		{
			arr[i_word][i_alp++] = *s;
			if (!*(s + 1) || *(s + 1) == c)
			{
				word_counter--;
				arr[i_word][i_alp] = '\0';
				i_word++;
				i_alp = 0;
			}
		}
		s++;
	}
	arr[i_word] = NULL;
	return (arr);
}
