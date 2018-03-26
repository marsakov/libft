/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakovyc <msakovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 16:24:13 by msakovyc          #+#    #+#             */
/*   Updated: 2018/03/26 18:57:24 by msakovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		size;

	size = dstsize;
	while (*dst)
		dst++;
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
		size++;
	}
	*dst = '\0';
	return (size);
}
