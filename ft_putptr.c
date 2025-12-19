/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:19:03 by fdeville          #+#    #+#             */
/*   Updated: 2025/12/19 18:14:12 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"

static int	ft_putnbr_ptr(unsigned long nbr, char *base)
{
	unsigned long	base_l;
	int				written;

	written = 0;
	base_l = 16;
	if (base_l > 0)
	{
		if (nbr > base_l - 1)
			written += ft_putnbr_ptr(nbr / base_l, base);
		written += write(1, &base[nbr % base_l], 1);
	}
	return (written);
}

int	ft_putptr(void *ptr)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	write(1, "0x", 2);
	return (2 + ft_putnbr_ptr(address, "0123456789abcdef"));
}
