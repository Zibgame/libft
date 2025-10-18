# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/12 21:18:42 by zcadinot          #+#    #+#              #
#    Updated: 2025/10/19 01:50:20 by zcadinot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f

SRC		=	srcs/ft_atoi.c \
			srcs/ft_bzero.c \
			srcs/ft_calloc.c \
			srcs/ft_isalnum.c \
			srcs/ft_isalpha.c \
			srcs/ft_isascii.c \
			srcs/ft_isdigit.c \
			srcs/ft_isprint.c \
			srcs/ft_itoa.c \
			srcs/ft_lstadd_back.c \
			srcs/ft_lstadd_front.c \
			srcs/ft_lstclear.c \
			srcs/ft_lstdelone.c \
			srcs/ft_lstiter.c \
			srcs/ft_lstlast.c \
			srcs/ft_lstmap.c \
			srcs/ft_lstnew.c \
			srcs/ft_lstsize.c \
			srcs/ft_memchr.c \
			srcs/ft_memcmp.c \
			srcs/ft_memcpy.c \
			srcs/ft_memove.c \
			srcs/ft_memset.c \
			srcs/ft_putchar_fd.c \
			srcs/ft_putendl_fd.c \
			srcs/ft_putnbr_fd.c \
			srcs/ft_putstr_fd.c \
			srcs/ft_split.c \
			srcs/ft_strchr.c \
			srcs/ft_strdup.c \
			srcs/ft_striteri.c \
			srcs/ft_strjoin.c \
			srcs/ft_strlcat.c \
			srcs/ft_strlcpy.c \
			srcs/ft_strlen.c \
			srcs/ft_strmapi.c \
			srcs/ft_strncmp.c \
			srcs/ft_strnstr.c \
			srcs/ft_strrchr.c \
			srcs/ft_strtrim.c \
			srcs/ft_substr.c \
			srcs/ft_tolower.c \
			srcs/ft_toupper.c

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

srcs/%.o: srcs/%.c libft.h
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
