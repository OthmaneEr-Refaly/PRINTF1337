/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:48:26 by oer-refa          #+#    #+#             */
/*   Updated: 2023/12/01 15:48:28 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// //Generally, you can store larger numbers in
// //a “long int” than you can in an “int”.

// //%d assume base 10 while %i auto detects the base.
// #include <stdio.h>
// #include <stdlib.h>
int	ft_putnbr(long int nbr)
{
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr);
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
		ft_putnbr(nbr);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	return (0);
}
// int main()
// {
//     long int nbr;
//     nbr = -88;
//     ft_putnbr(nbr);
//     printf("%ld \n",nbr);
//     //printf("%d",putnbr(nbr));
//     return (0);
// }