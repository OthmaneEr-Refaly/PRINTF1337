/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:17:04 by oer-refa          #+#    #+#             */
/*   Updated: 2023/12/01 16:17:06 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>


int	ft_putchar(char c);
int	ft_putnbr(long int nbr);
int	ft_putstr(char *s);
int ft_putnbr_base (unsigned int nbr, char *base);

#endif