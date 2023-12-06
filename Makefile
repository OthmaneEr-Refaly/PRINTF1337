# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 16:05:52 by oer-refa          #+#    #+#              #
#    Updated: 2023/12/05 16:05:53 by oer-refa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


files 	   = ft_putnbr \
			 ft_putstr \
			 ft_putnbr_base \
			 ft_formats \
			 ft_putchar \

Compiler	= cc

CFLAGS	= -Wall -Wextra -Werror

NAME = libft.a

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

all: $(NAME)


$(NAME): $(OFILES)
	ar -rc $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re