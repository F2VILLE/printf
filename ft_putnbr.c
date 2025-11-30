/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 04:41:20 by fdeville          #+#    #+#             */
/*   Updated: 2025/11/30 02:01:47 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	written;

	written = 0;
	if (n == INT_MIN)
	{
		written += ft_putchar('-');
		written += ft_putchar('2');
		written += ft_putnbr(147483648);
		return (11);
	}
	if (n < 0)
	{
		written += ft_putchar('-');
		n = -n;
	}
	if (n / 10)
		written += ft_putnbr(n / 10);
	written += ft_putchar('0' + (n % 10));
	return (written);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int	written;

	written = 0;
	if (n / 10)
		written += ft_putnbr(n / 10);
	written += ft_putchar('0' + (n % 10));
	return (written);
}
