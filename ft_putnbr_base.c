/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:47:53 by fdeville          #+#    #+#             */
/*   Updated: 2025/12/19 19:09:09 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	unsigned long	base_l;
	int				written;

	written = 0;
	base_l = 16;
	if (base_l > 0)
	{
		if (nbr > base_l - 1)
			written += ft_putnbr_base(nbr / base_l, base);
		written += write(1, &base[nbr % base_l], 1);
	}
	return (written);
}
