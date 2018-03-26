/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 19:55:07 by msakovyc          #+#    #+#             */
/*   Updated: 2018/03/23 19:55:59 by msakovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 1 && *(unsigned char *)s1 == *(unsigned char *)s2)
		{
			s1++;
			s2++;
		}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
