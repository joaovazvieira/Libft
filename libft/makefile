# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 12:29:25 by jovieira          #+#    #+#              #
#    Updated: 2022/10/31 21:38:59 by jovieira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
SRC= ft_atoi.c\
	 ft_bzero.c\
	 ft_calloc.c\
	 ft_isalnum.c\
	 ft_isalpha.c\
	 ft_isascii.c\
	 ft_isdigit.c\
	 ft_isprint.c\
	 ft_isspace.c\
	 ft_memchr.c\
	 ft_memcmp.c\
	 ft_memcpy.c\
	 ft_memmove.c\
	 ft_memset.c\
	 ft_strchr.c\
	 ft_strdup.c\
	 ft_strlcat.c\
	 ft_strlcpy.c\
	 ft_strlen.c\
	 ft_strncmp.c\
	 ft_strnstr.c\
	 ft_strrchr.c\
	 ft_tolower.c\
	 ft_toupper.c\
	 ft_substr.c\
	 ft_strjoin.c\
	 ft_putstr_fd.c\
	 ft_putendl_fd.c\
	 ft_putchar_fd.c\
	 ft_putnbr_fd.c\
	 ft_striteri.c\
	 ft_strmapi.c\
	 ft_itoa.c\
	 ft_strtrim.c\
	 ft_split.c\
	 
BONUS_SRC= ft_lstnew_bonus.c\
		   ft_lstadd_front_bonus.c\
		   ft_lstsize_bonus.c\
	       ft_lstlast_bonus.c\
	       ft_lstadd_back_bonus.c\
	       ft_lstdelone_bonus.c\
	       ft_lstclear_bonus.c\
	       ft_lstiter_bonus.c\
	       ft_lstmap_bonus.c\
	 

OBJ_REG		:= ${SRC:%.c=obj/%.o}
BONUS_OBJ	:= ${BONUS_SRC:%.c=obj/%.o}
ifdef WITH_BONUS
OBJ = $(OBJ_REG) ${BONUS_OBJ}
else
OBJ = $(OBJ_REG)
endif
CFLAGS	:= -Wall -Wextra -Werror
HEADER	:= libft.h
all: $(NAME)


$(NAME): $(OBJ) $(HEADER)
	ar -crs $(NAME) $(OBJ)
	
obj/%.o : %.c
	mkdir -p $(dir $@)
	gcc $(CFLAGS) -o $@ -c $<
	
bonus:
	@ $(MAKE) WITH_BONUS=1 all

clean:
	@rm -rf $(OBJ)
	@rm -rf $(BONUS_OBJ)
	
fclean: clean
	@rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re	