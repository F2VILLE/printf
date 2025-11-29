/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 02:35:05 by fdeville          #+#    #+#             */
/*   Updated: 2025/11/29 19:25:01 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

void	ft_putnbr(int n);
void	ft_putchar(int c);
void	ft_putstr(char *s);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_putptr(void *ptr);
int		ft_printf(const char *format, ...);

#endif
