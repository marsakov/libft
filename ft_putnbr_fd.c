/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakovyc <msakovyc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 21:01:02 by msakovyc          #+#    #+#             */
/*   Updated: 2018/03/29 21:06:56 by msakovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int ncopy;
	int n_i;

	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	ncopy = n;
	n_i = 1;
	while ((ncopy /= 10) > 0)
		n_i *= 10;
	ncopy = n;
	while (ncopy > 0)
	{
		ft_putchar_fd((ncopy / n_i + 48),  fd);
		ncopy %= n_i;
		n_i /= 10;
	}
}
