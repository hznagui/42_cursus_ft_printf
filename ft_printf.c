/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:36:44 by hznagui           #+#    #+#             */
/*   Updated: 2022/11/13 23:38:16 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_check(char string,va_list h)
{
    int y;
    y = 0;
    if (string == 'c')
        y += ft_putchar(va_arg(h,int));
    else if (string == '%')
        y += ft_putchar('%');
    else if((string == 'd' || string == 'i'))
        y += ft_putnbr(va_arg(h,int));
        else if(string == 'u')
        y += ft_put_uns_int(va_arg(h,unsigned int));
    else if(string == 's')
        y += ft_putstr(va_arg(h,char *));
    else if(string == 'x')
        y += ft_hexdecimal(va_arg(h,unsigned long long));
    else if(string == 'X')
        y += ft_heXdecimal(va_arg(h,unsigned long long));
    else if(string == 'p')
    {
        y += ft_putstr("0x");
        y += ft_hexdecimal(va_arg(h,unsigned long long));
    }
    return(0);
}
int ft_printf(const char *string, ...)
{
    va_list y;
    size_t i;
    i=0;
    va_start(y,string);

while (string[i])
{
    if (string[i] == '%')
    {
        ft_check(string[i+1],y);
        i++;
    }
    else
        ft_putchar(string[i]);
    i++;
}
return(0);
}
int main()
{
    int y =5564965;
    printf("%d\n",y);
    ft_printf("%d",y);
}