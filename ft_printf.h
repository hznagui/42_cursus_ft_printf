/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:42:30 by hznagui           #+#    #+#             */
/*   Updated: 2022/11/13 23:13:39 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
void	ft_putstr(char *s);
void    ft_putchar(char c);
int     ft_printf(const char *, ...);
void    ft_putnbr(int n);
size_t	ft_strlen(const char *s);
void ft_heXdecimal(unsigned long long i);
void ft_put_uns_int(unsigned int n);
void ft_hexdecimal(unsigned long long i);
#endif 