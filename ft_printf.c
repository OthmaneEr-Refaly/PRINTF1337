/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:57:44 by oer-refa          #+#    #+#             */
/*   Updated: 2023/12/05 16:57:45 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
    va_list args;
    int len;
    int i;

    i = 0;
    len = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == %)
        {
            i++;
            len += ft_formats(args, str[i])
        }
        else
            len += ft_putchar(str[i]);
        i++;
    }
    va_end(args)
    return (len);
}