/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:50:00 by oer-refa          #+#    #+#             */
/*   Updated: 2023/12/01 10:50:05 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_formats(va_list arg, char format)
{
    unsigned int len;

    len = 0;
    if (format == 'c')
        len+= ft_putchar(va_arg(arg, int));
    else if (format == 's')
        len+= ft_putstr(va_arg(arg, char *));
    else if (format == 'd' || format == 'i')
        len += ft_putnbr(va_arg(arg, int));
    else if (format == 'u')
        len+= ft_putnbr_base(va_arg(arg, unsigned int),"0123456789");
    else if (format == 'x')
        len+= ft_putnbr_base(va_arg(arg, unsigned int),"0123456789abcdef");
    else if (format == 'X')
        len += ft_putnbr_base(va_arg(arg, unsigned int),"0123456789ABCDEF");
    else if (format == 'p')
    {
        len+= ft_putstr("0x");
        len += ft_putnbr_base(va_arg(arg,unsigned int),"0123456789abcdef");
    } 
    else
		len += ft_putchar('%');
    return (len);
}
int ft_printf(const char *format, ...)
{
    va_list arg;
    int count;
    int i;

    count = 0;
    i = 0;
    va_start(arg, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            count += ft_formats(arg, format[i]);
        }
        else
            count += ft_putchar(format[i]);
        i++;
    }
    va_end(arg);
    return (count);
}