# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 19:17:23 by kmesas            #+#    #+#              #
#    Updated: 2014/04/30 16:57:21 by atodorov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include Makefile.source

NAME = libft.a

OBJS = $(SRCS:.c=.o)

CFLAGS = -Werror -Wall -Wextra

.PHONY: all re fclean clean

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $@ $^
	@ranlib $@
	@echo "\033[1;32m\nCompilation of libft.a successful :)\033[0m"

%.o: %.c
	@echo -n -
	@cc -c -o $@ $^ $(CFLAGS)

clean:
	 @rm -f $(OBJS)
	 @echo "\033[1;31mObjects deleted !\033[0m"

fclean: clean
	 @rm -f $(NAME)
	 @echo "\033[1;31mlibft.a deleted !\033[0m"

re: fclean all

