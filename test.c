/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:56:49 by fdeville          #+#    #+#             */
/*   Updated: 2025/11/29 22:20:19 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char	*s = "meow";
	unsigned int u = ((unsigned int)INT_MAX) + 10;
	int		written;
	int		og;

	written = ft_printf("test %%%% %d %c \"%s\"\n%d (10) => %X (16)\nUnsigned : %u\n\n",
		19, 'V', s, 42, 42, u);
	og = printf("test %%%% %d %c \"%s\"\n%d (10) => %X (16)\nUnsigned : %u\n\n",
		19, 'V', s, 42, 42, u);
	int a = ft_printf("%d | %d\n\n", written, og);
	int b = printf("%d | %d\n\n", written, og);
	ft_printf("a = %d\nb = %d\n\n", a, b);
	return (0);
}
