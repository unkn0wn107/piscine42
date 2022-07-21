# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchenava <mchenava@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 19:23:30 by mchenava          #+#    #+#              #
#    Updated: 2022/07/21 19:46:47 by mchenava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_NAME = libhexdump.a
SRCS_PATH = ./
O_PATH = *.o
INCLUDES_PATH = ./
CFLAGS = -Wall -Wextra -Werror 
EXTRA_FLAGS = -c -I$(INCLUDES_PATH)
CC = gcc
PROG_NAME = ft_hexdump

:	all

all :	$(LIB_NAME)

$(LIB_NAME) : 
	$(CC) $(CFLAGS) $(EXTRA_FLAGS) $(SRCS_PATH)/read_file.c		-o $(SRCS_PATH)/read_file.o
	$(CC) $(CFLAGS) $(EXTRA_FLAGS) $(SRCS_PATH)/ft_putstr.c 	-o $(SRCS_PATH)/ft_putstr.o
	$(CC) $(CFLAGS) $(EXTRA_FLAGS) $(SRCS_PATH)/main.c			-o $(SRCS_PATH)/main.o
	$(CC) $(CFLAGS) $(EXTRA_FLAGS) $(SRCS_PATH)/write_content.c -o $(SRCS_PATH)/write_content.o
	$(CC) $(CFLAGS) $(EXTRA_FLAGS) $(SRCS_PATH)/option.c 		-o $(SRCS_PATH)/option.o
	$(CC) $(CFLAGS) $(EXTRA_FLAGS) $(SRCS_PATH)/print_mem.c 	-o $(SRCS_PATH)/print_mem.o
	ar rc $(LIB_NAME) $(O_PATH)
	ranlib $(LIB_NAME)
	$(CC) $(CFLAGS) $(SRCS_PATH)/$(LIB_NAME) 	 -g -fsanitize=address				-o $(SRCS_PATH)/$(PROG_NAME)

clean :
	rm -f $(O_PATH)
	rm -f $(LIB_NAME)

fclean : clean
	rm -f $(PROG_NAME)

re : fclean all