/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 16:01:32 by msakovyc          #+#    #+#             */
/*   Updated: 2018/03/23 16:08:42 by msakovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *temp1;
	unsigned char *temp2;

	temp1 = (unsigned char *)dst;
	temp2 = (unsigned char *)src;
	if (!*temp2)
		return (0);
	while (n--)
		*temp1++ = *temp2++;
	return ((void *)dst);
}
