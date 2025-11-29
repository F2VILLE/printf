/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:19:03 by fdeville          #+#    #+#             */
/*   Updated: 2025/11/29 22:19:00 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	char			hex_digits[] = "0123456789abcdef";
	char			buffer[17];
	int				i;
	int				j;

	address = (unsigned long)ptr;
	i = 0;
	if (!ptr)
	{
		return (write(1, "(nil)", 5));
	}
	buffer[i++] = '0';
	buffer[i++] = 'x';
	j = 0;
	while (j < 28)
	{
		buffer[i++] = hex_digits[(address >> j) & 0xF];
		j -= 4;
	}
	buffer[i] = '\0';
	return (write(1, buffer, i));
}
