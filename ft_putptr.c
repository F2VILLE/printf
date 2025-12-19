/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:19:03 by fdeville          #+#    #+#             */
/*   Updated: 2025/12/19 19:10:09 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	write(1, "0x", 2);
	return (2 + ft_putnbr_base(address, "0123456789abcdef"));
}
