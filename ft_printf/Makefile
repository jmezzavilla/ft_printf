# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 21:48:02 by jmezzavilla       #+#    #+#              #
#    Updated: 2023/04/22 12:37:45 by jmezzavilla      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

FILES = ft_printf.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putpointer.c\
		ft_putnbr.c\
		ft_putuint.c\
		ft_putbase.c\

SRCO = $(FILES:.c=.o)

CME = ar -rcs

RM = rm -f

$(NAME):	$(SRCO)
			$(CME) $(NAME) $(SRCO)

all: $(NAME)

clean:
		$(RM) $(SRCO)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

link:	re
		$(RM) result
		$(CC) $(FLAGS) -o result main.c -L. -lftprintf

run:	link
		./result
		$(RM) result

.PHONY: all clean fclean re link run
