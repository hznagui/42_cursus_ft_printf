/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:42:30 by hznagui           #+#    #+#             */
/*   Updated: 2022/11/14 18:39:49 by hznagui          ###   ########.fr       */
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
unsigned int ft_heXadecimal(unsigned int i);
unsigned int ft_put_uns_int(unsigned int n);
unsigned int ft_hexdecimal(unsigned int i);
size_t	ft_strlen(const char *s);
int ft_ptr(unsigned long i);
#endif 