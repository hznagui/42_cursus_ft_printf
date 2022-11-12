/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:36:44 by hznagui           #+#    #+#             */
/*   Updated: 2022/11/12 17:56:16 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int ft_printf(const char *string, ...)
{
    va_list y;
    size_t i;
    i=0;
    va_start(y,string);

while (string[i])
{
    if (string[i] == '%' && string[i + 1] == 'c')
    {
        ft_putchar(va_arg(y,int));
        i++;
    }
    else if(string[i] == '%' && string[i + 1] == 'd')
    {
        ft_putnbr(va_arg(y,int));
        i++;
    }
    else if(string[i] == '%' && string[i + 1] == 's')
    {
        ft_putstr(va_arg(y,char *));
        i++;
    }
    else
        ft_putchar(string[i]);
    i++;
}
return(ft_strlen(string));
}
int main()
{
    ft_printf("hello %c",'a');
}