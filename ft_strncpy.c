/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakovyc <msakovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 14:04:39 by msakovyc          #+#    #+#             */
/*   Updated: 2018/03/26 18:37:56 by msakovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*begin;

	begin = dst;
	while (n && *src)
	{
		*dst++ = *src++;
		--n;
	}
	while (n)
	{
		*dst++ = '\0';
		n--;
	}
	return (begin);
}
