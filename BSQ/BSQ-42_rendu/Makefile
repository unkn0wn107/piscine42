# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 22:40:27 by mchenava          #+#    #+#              #
#    Updated: 2022/07/27 17:44:21 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

PROG_NAME = 		bsq
LIB_NAME = 			lib_bsq.a

SOURCE_FILES = 		./src
OBJ_DIR = 			./obj
TESTS = 			./tests/

SOURCES  := 		$(wildcard $(SOURCE_FILES)/*/*.c) main.c
INCLUDES := 		$(wildcard $(SOURCE_FILES)/*/*.h) includes.h
OBJECTS  := 		$(SOURCES:.c=.o)

IMP_MODULE = 		implemented_ft
PARSE_MODULE = 		parsing
SOLVER_MODULE = 	solver
UTILS_MODULE = 		memory

CC = 				gcc
CFLAGS = 			-Wall -Wextra -Werror
DBG_FLAGS = 		-g -fdiagnostics-color=always

CLEAN = 			rm -rf

BGreen=				\033[1;92m
YELLOW = 			\033[1;93m
NC = 				\033[0;0m

all : $(PROG_NAME)

$(PROG_NAME) : $(OBJECTS)
	@$(CC) $(CFLAGS) $^ -o $@ -O2 
	@echo "✅ > $(BGreen)$(PROG_NAME)$(NC) compiled."

%.o : %.c 
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "🛠  > $(YELLOW)$<$(NC) builded."

check:
	norminette $(SOURCE_FILES)

clean :
	@echo "🧹 > Cleaning $(YELLOW)object$(NC) files..."
	@$(CLEAN) $(OBJECTS)
	
fclean : clean
	@echo "🗑  > Cleanning $(BGreen)binary$(NC) files..."
	@$(CLEAN) $(PROG_NAME)

re : fclean all

test : fclean $(OBJECTS)
	$(CC) $(OBJECTS) -g $(CFLAGS) -o $(PROG_NAME)_test

map : fclean $(OBJECTS)
	$(CC) $(OBJECTS) -g $(CFLAGS) -o $(PROG_NAME)_map_test
	./start_gen_maps.sh
	./$(PROG_NAME)_map_test maps/rand_maps/*

ci-test:	check
	$(CC) $(CFLAGS) -g $(SOURCE_FILES)*/*.c test.c -o $(PROG_NAME)_test
	ls */*
	valgrind --leak-check=full	--show-leak-kinds=all --track-origins=yes --verbose ./$(PROG_NAME)_test

.PHONY:		all all_obj test ci-test check clean fclean re \
			implemented_ft_out parsing_out memory_out all_lib implemented_ft_lib parsing_lib memory_lib \
			implemented_ft_obj parsing_obj memory_obj 
