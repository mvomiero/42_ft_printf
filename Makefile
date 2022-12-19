# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 16:15:34 by mvomiero          #+#    #+#              #
#    Updated: 2022/12/19 17:31:54 by mvomiero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_putalpha.c \
		ft_putnumeric.c \

FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all:		$(NAME)

%.o : %.c
	cc $(FLAGS) -c $(SRCS)
# % acts like a wildcard, looks for the pattern

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re