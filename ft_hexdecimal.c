/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:48:39 by hznagui           #+#    #+#             */
/*   Updated: 2022/11/13 23:01:39 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_hexdecimal(unsigned long long i)
{
    if (i <= 9)
        ft_putchar(i + '0');
    else if (i == 10)
        ft_putchar('a');
    else if (i == 11)
        ft_putchar('b');
    else if (i == 12)
        ft_putchar('c');
    else if (i == 13)
        ft_putchar('d');
    else if (i == 14)
        ft_putchar('e');
    else if (i == 15)
        ft_putchar('f'); 
    else if (i >= 15)
    {
        ft_hexdecimal(i / 16);
        ft_hexdecimal(i % 16);
    }
}