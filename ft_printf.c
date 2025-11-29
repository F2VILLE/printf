/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:23:18 by fdeville          #+#    #+#             */
/*   Updated: 2025/11/29 20:47:24 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "ft_printf.h"

static int	ft_print_format(char c, va_list *args)
{
	int	written;

	written = 0;
	if (c == '%')
		written += ft_putchar('%');
	else if (c == 'd' || c == 'i')
		written += ft_putnbr(va_arg(*args, int));
	else if (c == 'c')
		written += ft_putchar(va_arg(*args, int));
	else if (c == 's')
		written += ft_putstr(va_arg(*args, char *));
	else if (c == 'p')
		written += ft_putptr(va_arg(*args, void *));
	else if (c == 'u')
		written += ft_putnbr_unsigned(va_arg(*args, unsigned int));
	else if (c == 'x')
		written += ft_putnbr_base(va_arg(*args, int), "0123456789abcdef");
	else if (c == 'X')
		written += ft_putnbr_base(va_arg(*args, int), "0123456789ABCDEF");
	return (written);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		written;

	va_start(args, format);
	i = 0;
	written = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (0);
			written += ft_print_format(format[i], &args);
		}
		else
		{
			written += ft_putchar(format[i]);
		}
		i++;
	}
	return (written);
}
