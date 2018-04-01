/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 22:54:44 by msakovyc          #+#    #+#             */
/*   Updated: 2018/03/30 22:54:51 by msakovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		*ft_countalph(char const *s, char c, int words)
{
	int	*wordslen;
	int counter;
	int i_words;
	int i;

	i = 0;
	i_words = 0;
	counter = 0;
	wordslen = (int *)malloc(sizeof(int) * words);
	while (s[i] && words)
	{
		if (s[i] != c)
		{
			counter++;
			if (s[i + 1] == c || !s[i + 1])
			{
				wordslen[i_words++] = counter + 1;
				counter = 0;
				words--;
			}
		}
		i++;
	}
	return (wordslen);
}

int		ft_countwords(char const *s, char c)
{
	int	words;
	int i;

	i = 0;
	words = 0;
	if (!s || !*s || !c)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			words++;
		i++;
	}
	return (words);
}

char	**ft_fillarr(char const *s, char c, char **arr)
{
	int i;
	int i_words;
	int i_alph;

	i = 0;
	i_words = 0;
	i_alph = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			arr[i_words][i_alph++] = s[i];
			if (!s[i + 1] || s[i + 1] == c)
			{
				arr[i_words][i_alph] = '\0';
				i_alph = 0;
				i_words++;
			}
		}
		i++;
	}
	//printf("%s %s %s %s %s\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	return (arr);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**arr;
	int		words;
	int		i_words;
	int		*wordslen;

	i = 0;
	i_words = 0;
	words = ft_countwords(s, c);
	wordslen = ft_countalph(s, c, words);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (0);
	while (i_words < words)
	{
		arr[i_words] = (char *)malloc(sizeof(char) * wordslen[i_words]);
		if (!arr[i_words])
			return (0);
		i_words++;
	}
	arr = ft_fillarr(s, c, arr);
	arr[i_words] = NULL;
	return (arr);
}

int main()
{
	char *s = "      split       this for   me  !       ";

	char **r = ft_strsplit(s, ' ');
	printf("%s_%s_%s_%s_%s_%s\n", r[0], r[1], r[2], r[3], r[4], r[5]);
	return (0);
}
