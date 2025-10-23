/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 02:35:05 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/23 17:22:19 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

void	ft_putnbr(int n);
void	ft_putchar(int c);
void	ft_putstr(char *s);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putptr(void *ptr);
int		ft_printf(const char *format, ...);

#endif
