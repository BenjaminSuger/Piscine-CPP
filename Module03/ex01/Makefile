# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/07 08:45:05 by bsuger            #+#    #+#              #
#    Updated: 2025/12/02 08:31:34 by bsuger           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME = ex01
SRCS = ./sources/ClapTrap.cpp \
       ./sources/ScavTrap.cpp \
       ./sources/main.cpp

HEADER = ./includes/ClapTrap.hpp \
	 ./includes/ScavTrap.hpp

COLOUR_GREEN=\033[0;32m
COLOUR_END=\033[0m

OBJ_DIR = ./obj

FLAGS = -Wall -Werror -Wextra -g -std=c++98

OBJ=$(SRCS:./sources/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -I./includes -o $(NAME)
	@echo "$(COLOUR_GREEN)compilation done$(COLOUR_END) 🐱"
	@echo "$(COLOUR_GREEN)make game to play a game$(COLOUR_END) 🐱"

$(OBJ_DIR)/%.o: ./sources/%.cpp $(HEADER) | $(OBJ_DIR)
	@c++ -c $(FLAGS) -I./includes $< -o $@ 

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
clean:
	@/usr/bin/rm -rf $(OBJ_DIR)
	@echo "$(COLOUR_GREEN)clean obj files done$(COLOUR_END)"

fclean: clean
	@/usr/bin/rm -rf $(NAME)
	@echo "$(COLOUR_GREEN)all clean complete 🐈$(COLOUR_END)"

re: fclean all

CHERRY = 🍒
APPLE = 🍎
WATERMELON = 🍉
PEAR =🍐

game:
	echo "Welcome to the C++ game slot machine"
	echo "Number of win ; 1"
	echo "if you win to the first try you have a cookie for free (if the machin is working)"
	echo "second try is negotiable (see condidtions with the owner)"
	echo "a winning combination is 3 same fruits"
	echo "we have ; $(CHERRY) $(APPLE) $(WATERMELON) $(PEAR)"
	echo ""
	echo "===========SLOT MACHINE==============="
	@for number in 1 2 3; do \
		sleep 1; \
		num=$$(shuf -i 1-4 -n 1); \
		if [ $$num -eq 1 ]; then \
			echo -n "$(CHERRY) "; \
		elif [ $$num -eq 2 ]; then \
			echo -n "$(APPLE) "; \
		elif [ $$num -eq 3 ]; then \
			echo -n "$(WATERMELON) "; \
		else \
			echo -n "$(PEAR) "; \
		fi; \
	done; \
	echo ""
