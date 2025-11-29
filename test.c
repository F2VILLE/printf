/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:56:49 by fdeville          #+#    #+#             */
/*   Updated: 2025/11/29 19:26:34 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	char	*s = "meow";
	unsigned int u = ((unsigned int)INT_MAX) + 10;
	ft_printf("test %%%% %d %c \"%s\"\n%d (10) => %X (16)\nUnsigned : %u\n\n",
		19, 'V', s, 42, 42, u);
	return (0);
}
