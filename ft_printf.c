/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:23:18 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/23 17:30:00 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "ft_printf.h"

static void	ft_print_format(char c, va_list *args)
{
	if (c == '%')
		ft_putchar('%');
	if (c == 'd')
		ft_putnbr(va_arg(*args, int));
	else if (c == 'c')
		ft_putchar(va_arg(*args, int));
	else if (c == 's')
		ft_putstr(va_arg(*args, char *));
	else if (c == 'p')
		ft_putptr(va_arg(*args, void *));
}

int	count_formats(const char *format)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && !(i > 0 && format[i - 1] == '\\'))
			count++;
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (0);
			ft_print_format(format[i], &args);
		}
		else
		{
			ft_putchar(format[i]);
		}
		i++;
	}
	return (0);
}
