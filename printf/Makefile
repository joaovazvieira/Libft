# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 11:33:27 by jovieira          #+#    #+#              #
#    Updated: 2022/11/28 18:12:41 by jovieira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a
OBJ_DIR := ./obj
SRC_DIR := ./src

SRC=	ft_printf.c\
		ft_isdigit.c\
		ft_atoi.c\
		ft_itoa.c\
		ft_itoa_unsigned.c\
		ft_memcpy.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strlen.c\
		ft_strjoin.c\
		ft_substr.c\
		ft_strlcat.c\
		conv_aph.c\
		ft_strlcpy.c\
		parse.c

#flags.c
#ft_hex.c
#BONUS_SRC=

SRC			:= $(addprefix $(SRC_DIR)/,$(SRC))
BONUS_SRC	:= $(addprefix $(SRC_DIR)/,$(BONUS_SRC))

OBJ_REG		:= $(notdir $(SRC:%.c=%.o))
BONUS_OBJ	:= $(notdir $(BONUS_SRC:.c=.o))

ifdef WITH_BONUS
OBJ_EX = $(OBJ_REG) $(BONUS_OBJ)
OBJ = $(addprefix $(OBJ_DIR)/,$(OBJ_EX))
else
OBJ = $(addprefix $(OBJ_DIR)/,$(OBJ_REG))
endif

CFLAGS	:= -Wall -Wextra -Werror -g
HEADER	:= libftprintf.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -crs $(NAME) $(OBJ)
	
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c | $(OBJ_DIR)
	gcc $(CFLAGS) $(INCLUDE) -o $@ -c $^
	
$(OBJ_DIR):
	mkdir -p $@
	
bonus:
	@ $(MAKE) WITH_BONUS=1 all

clean:
	@rm -rf $(OBJ_DIR)
	
fclean: clean
	@rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re	