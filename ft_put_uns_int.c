/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:20:18 by hznagui           #+#    #+#             */
/*   Updated: 2022/11/12 20:24:32 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void ft_put_uns_int(unsigned int n)
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

}