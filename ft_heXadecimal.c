/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heXadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:41:39 by hznagui           #+#    #+#             */
/*   Updated: 2022/11/14 17:09:00 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


unsigned long long ft_heXdecimal(unsigned long long i)
{
    unsigned long long p;
    p=0;
    if (i < 0)
        p += 1;
    else if (i <= 9)
        p += ft_putchar(i + '0');
    else if (i == 10)
        p += ft_putchar('A');
    else if (i == 11)
        p += ft_putchar('B');
    else if (i == 12)
        p += ft_putchar('C');
    else if (i == 13)
        p += ft_putchar('D');
    else if (i == 14)
        p += ft_putchar('E');
    else if (i == 15)
        p += ft_putchar('F'); 
    else if (i >= 15)
    {
        p += ft_hexdecimal(i / 16);
        p += ft_hexdecimal(i % 16);
    }
    return(p);
}