/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakovyc <msakovyc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 19:00:33 by msakovyc          #+#    #+#             */
/*   Updated: 2018/03/29 21:07:15 by msakovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int ncopy;
	int n_i;

	if (n < 0 && n != -2147483648)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n == 0)
		ft_putchar('0');
	if (n == -2147483648)
		ft_putstr("-2147483648");
	ncopy = n;
	n_i = 1;
	while ((ncopy /= 10) > 0)
		n_i *= 10;
	ncopy = n;
	while (ncopy > 0)
	{
		ft_putchar(ncopy / n_i + 48);
		ncopy %= n_i;
		n_i /= 10;
	}
}
