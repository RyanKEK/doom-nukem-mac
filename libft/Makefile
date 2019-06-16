# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dminakov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/22 17:37:58 by dminakov          #+#    #+#              #
#    Updated: 2018/12/02 19:46:32 by ohavryle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_memchr.c ft_putchar_fd.c ft_strcat.c ft_strequ.c ft_strmapi.c ft_strrchr.c print_list.c\
	  ft_isascii.c ft_memcmp.c ft_putendl.c ft_strchr.c ft_striter.c ft_strncat.c ft_strsplit.c ft_strrev.c\
	  ft_isdigit.c ft_memcpy.c ft_putendl_fd.c ft_strclr.c ft_striteri.c ft_strncmp.c ft_strstr.c ft_pow.c\
	  ft_isprint.c ft_memdel.c ft_putnbr.c ft_strcmp.c ft_strjoin.c ft_strncpy.c ft_strsub.c any_to_any.c\
	  ft_atoi.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strcpy.c ft_strlcat.c ft_strnequ.c ft_strtrim.c \
	  ft_bzero.c ft_memalloc.c ft_memset.c ft_putstr.c ft_strdel.c ft_strlen.c ft_strnew.c ft_tolower.c \
	  ft_isalnum.c ft_memccpy.c ft_putchar.c ft_putstr_fd.c ft_strdup.c ft_strmap.c ft_strnstr.c ft_toupper.c \
	  ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c dec_to_any.c any_to_dec.c\

OBJ	= ft_isalpha.o ft_memchr.o ft_putchar_fd.o ft_strcat.o ft_strequ.o ft_strmapi.o ft_strrchr.o print_list.o\
	  ft_isascii.o ft_memcmp.o ft_putendl.o ft_strchr.o ft_striter.o ft_strncat.o ft_strsplit.o ft_strrev.o\
	  ft_isdigit.o ft_memcpy.o ft_putendl_fd.o ft_strclr.o ft_striteri.o ft_strncmp.o ft_strstr.o ft_pow.o\
	  ft_isprint.o ft_memdel.o ft_putnbr.o ft_strcmp.o ft_strjoin.o ft_strncpy.o ft_strsub.o any_to_any.o\
	  ft_atoi.o ft_itoa.o ft_memmove.o ft_putnbr_fd.o ft_strcpy.o ft_strlcat.o ft_strnequ.o ft_strtrim.o \
	  ft_bzero.o ft_memalloc.o ft_memset.o ft_putstr.o ft_strdel.o ft_strlen.o ft_strnew.o ft_tolower.o \
	  ft_isalnum.o ft_memccpy.o ft_putchar.o ft_putstr_fd.o ft_strdup.o ft_strmap.o ft_strnstr.o ft_toupper.o \
	  ft_lstadd.o ft_lstdel.o ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o dec_to_any.o any_to_dec.o\

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ) includes/*.h

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
