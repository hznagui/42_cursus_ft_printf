/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:20:18 by hznagui           #+#    #+#             */
/*   Updated: 2022/11/13 23:39:43 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static unsigned int ft_return(unsigned int n)
{
	unsigned int y;
	y = 0;
	if (n == 0)
		return(1);
	while(n != 0)
	{
		n /= 10;
		y++;	
	}
	return(y);
}
unsigned int ft_put_uns_int(unsigned int n)
{
	if (n > 9)
	{
		ft_put_uns_int(n / 10);
		ft_put_uns_int(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
	return(ft_return(n));
}