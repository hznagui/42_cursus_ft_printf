/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:36:44 by hznagui           #+#    #+#             */
/*   Updated: 2022/11/15 13:40:29 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(char string, va_list h)
{
	int	y;

	y = 0;
	if (string == 'c')
		y += ft_putchar(va_arg(h, int));
	else if (string == '%')
		y += ft_putchar('%');
	else if ((string == 'd' || string == 'i'))
		y += ft_putnbr(va_arg(h, int));
	else if (string == 'u')
		y += ft_put_uns_int(va_arg(h, unsigned int));
	else if (string == 's')
		y += ft_putstr(va_arg(h, char *));
	else if (string == 'x')
		y += ft_hexdecimal(va_arg(h, unsigned int));
	else if (string == 'X')
		y += ft_hexadecimal(va_arg(h, unsigned int));
	else if (string == 'p')
	{
		y += ft_putstr("0x");
		y += ft_ptr(va_arg(h, unsigned long));
	}
	return (y);
}

int	ft_printf(const char *string, ...)
{
	va_list	y;
	size_t	i;
	int		o;

	o = 0;
	i = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(y, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			o += ft_check(string[i + 1], y);
			if (ft_check(string[i + 1], y))
				i++;
		}
		else
			o += ft_putchar(string[i]);
		i++;
	}
	return (o);
}
