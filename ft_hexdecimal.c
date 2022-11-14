/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:48:39 by hznagui           #+#    #+#             */
/*   Updated: 2022/11/14 18:27:55 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int ft_hexdecimal(unsigned int i)
{
    unsigned int p;
    p=0;
    if (i < 0)
        p += 1;
    else if (i <= 9)
        p += ft_putchar(i + '0');
    else if (i == 10)
        p += ft_putchar('a');
    else if (i == 11)
        p += ft_putchar('b');
    else if (i == 12)
        p += ft_putchar('c');
    else if (i == 13)
        p += ft_putchar('d');
    else if (i == 14)
        p += ft_putchar('e');
    else if (i == 15)
        p += ft_putchar('f'); 
    else if (i >= 15)
    {
        p += ft_hexdecimal(i / 16);
        p += ft_hexdecimal(i % 16);
    }
    return(p);
}