/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heXadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:41:39 by hznagui           #+#    #+#             */
/*   Updated: 2022/11/13 23:14:48 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void ft_heXdecimal(unsigned long long i)
{
	if (i >15)
	{
		ft_heXdecimal(i / 16);
		ft_heXdecimal(i % 16);
	}
    else if (i <= 9)
        ft_putchar(i + '0');
    else if (i == 10)
        ft_putchar('A');
    else if (i == 11)
        ft_putchar('B');
    else if (i == 12)
        ft_putchar('C');
    else if (i == 13)
        ft_putchar('D');
    else if (i == 14)
        ft_putchar('E');
    else if (i == 15)
        ft_putchar('F');
}