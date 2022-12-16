# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 16:15:34 by mvomiero          #+#    #+#              #
#    Updated: 2022/12/16 13:32:18 by mvomiero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_putalpha.c \
		ft_putnumeric.c \

OBJS = $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re