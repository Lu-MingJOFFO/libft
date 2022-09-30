# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 13:35:58 by ljoffo            #+#    #+#              #
#    Updated: 2021/12/17 17:52:41 by ljoffo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

HEADER	= libft.h

CC	= gcc

FLAGS 	= -Wall -Werror -Wextra

SRCS	= ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \

OBJS 	= ${SRCS:.c=.o}

%.o : %.c ${HEADER}
	${CC} ${FLAGS} -c $< -o $@ 

${NAME}: ${OBJS}
	ar r ${NAME} ${OBJS}

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY : all clean fclean re
