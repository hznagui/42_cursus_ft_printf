/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:42:30 by hznagui           #+#    #+#             */
/*   Updated: 2022/11/14 17:09:07 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
int ft_putstr(char *s);
int	ft_putchar(char c);
int     ft_printf(const char *, ...);
int	ft_putnbr(int n);
unsigned long long ft_heXdecimal(unsigned long long i);
unsigned int ft_put_uns_int(unsigned int n);
unsigned long long ft_hexdecimal(unsigned long long i);
size_t	ft_strlen(const char *s);
#endif 