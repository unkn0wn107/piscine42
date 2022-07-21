# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 17:24:11 by agaley            #+#    #+#              #
#    Updated: 2022/07/20 19:03:29 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAMES = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
OBJS = ${SRCS:.c=.o}
H = includes/ft.h
CFLAGS = -Wall -Wextra -Werror

all:		libft.a

libft.a:
			gcc ${CFLAGS} -c $< -o ${<:.c=.o} -I ${H}
			cd srcs && ar rc ../libft.a $(OBJS)

clean:
			$(foreach obj, $(OBJS), rm -f srcs/$(obj);)

fclean:		clean
			rm -f libft.a

re:			fclean all

.PHONY:		all clean fclean re
