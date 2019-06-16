# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/16 13:16:35 by ohavryle          #+#    #+#              #
#    Updated: 2019/06/16 13:16:37 by ohavryle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = doom-nukem

SRC = src/main.c src/get_next_line.c

OBJ = src/main.o src/get_next_line.o

INC = includes/doom-nukem.h includes/get_next_line.h

CFLAGS = -Wall -Wextra -Werror -O2

.PHONY : all re lib clean fclean

all: lib $(NAME)

$(NAME): $(OBJ) ./libft/libft.a 
	$(CC) -o $(NAME) -I includes/get_next_line.h -I includes/doom-nukem.h -I/usr/local/include -I libft/include $(OBJ) -L libft/  -lft -L /Users/ohavryle/.brew/Cellar/sdl2/2.0.9_1/lib -lSDL2

./src/%.o: ./src/%.c $(INC)
	$(CC) $(CFLAGS) -I includes/wolf3d.h -I includes/get_next_line.h -o  $@ -c $<

lib: 
	@$(MAKE) -C libft all

clean:
	@$(MAKE) -C libft clean
	rm -f $(OBJ)

fclean: clean
	@$(MAKE) -C libft fclean
	rm -f $(NAME)

re: fclean all
