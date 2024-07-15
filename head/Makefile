# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmory <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/15 10:13:31 by tmory             #+#    #+#              #
#    Updated: 2024/07/15 10:13:33 by tmory            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
DIR = ../
CFLAG = -Wall -Wextra -Werror
RM = rm
SRC = ft_strlen.c \
		ft_strdup.c \
		swap.c \
		swap_str.c \
		reverse_str.c \

OBJ = $(SRC:.c=.o)
NAME = head.a

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@mv $(NAME) $(DIR)
	@echo "\033[90m[\033[32;1;5mSuccess\033[0m\033[90m]\033[32m Successfully compiled Libft.\033[0m"

%.o: %.c
	$(CC) $(CFLAG) -o $@ -c $<

clean:
	$(RM) -f $(OBJ)
	@echo "\033[90m[\033[91;5;1mDeleting\033[0m\033[90m]\033[31m Object HEAD_H files deleted\033[0m"

fclean: clean
	$(RM) -f $(DIR)$(NAME)

re: fclean $(NAME)
.PHONY:  all clean fclean re
