/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:19:03 by fdeville          #+#    #+#             */
/*   Updated: 2025/11/30 02:29:38 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	const char		*hex_digits;
	char			buffer[32];
	int				i;
	int				j;

	address = (unsigned long)ptr;
	i = 0;
	hex_digits = "0123456789abcdef";
	if (!ptr)
		return (write(1, "(nil)", 5));
	buffer[i++] = '0';
	buffer[i++] = 'x';
	j = 60;
	while (j >= 0)
	{
		if (!(((address >> j) & 0xF) == 0x0 && i <= 1))
			buffer[i++] = hex_digits[(address >> j) & 0xF];
		j -= 4;
	}
	buffer[i] = '\0';
	return (write(1, buffer, i));
}
