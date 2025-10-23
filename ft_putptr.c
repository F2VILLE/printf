/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:19:03 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/23 17:26:56 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putptr(void *ptr)
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
		write(1, "(nil)", 5);
		return ;
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

	write(1, buffer, i);
}
