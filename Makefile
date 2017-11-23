# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/23 13:44:05 by fbenneto          #+#    #+#              #
#    Updated: 2017/11/23 14:24:49 by fbenneto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = get_next_line
SRC =\
	get_next_line.c\
	main_test_get.c\

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra
LIBFLAG = -Ilibft/
DLIB = libft/
LIBFT = libft.a
MAIFLAG = -I./

YEL="\\033[33m"
BLU="\\033[34m"
RED="\\033[31m"
NC="\\033[0m"
MAG="\\033[35m"
CYA="\\033[36m"
GRE="\\033[32m"
BOL="\\033[1m"
CHE="\\xE2\\x9C\\x94"
OK="$(GRE)$(CHE)$(NC)"

all: $(NAME)

$(NAME) : $(LIBFT) $(OBJ)
	@printf "\n[$(NAME)] linking $(CYA)$(BOL)$(OBJ)$(NC)\n"
	@printf "to make the binary $(MAG)$(BOL)$(NAME)$(NC)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(DLIB)$(LIBFT)
	@printf '\t\t'$(OK)'\n'

$(LIBFT) :
	@make -C $(DLIB) all

%.o : %.c
	@printf "\r\033[0K[$(NAME)] compile $(BOL)$(YEL)$<$(NC)..."
	@$(CC) $(CFLAGS) -I./libft -c $<
	@printf '\t'$(OK)

clean:
	@make -C $(DLIB) $@
	@printf "[$(NAME)] rm all $(BOL)$(RED) obj file$(NC)"
	@rm -f $(OBJ)
	@printf '\t\t'$(OK)'\n'

fclean: clean
	@make -C $(DLIB) cleanf
	@printf "[$(NAME)] rm $(BOL)$(CYA)$(NAME)$(NC)"
	@rm -f $(NAME)
	@printf '\t\t'$(OK)'\n'

re: fclean all

proper : all clean

.PHONY: re proper
