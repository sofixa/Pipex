#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ochase <ochase@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/31 12:44:13 by ochase            #+#    #+#              #
#    Updated: 2013/12/31 19:34:47 by atodorov         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = pipex

SRC_C = \
		main.c\
		ft_pipex.c\
		ft_path.c\
		ft_error_handling.c\

SRC_O = $(subst .c,.o,$(SRC))

all:	$(NAME)


$(NAME):
	make -C ./libft/
	gcc -Wall -Wextra -Werror -pedantic	-o $(NAME) $(SRC_C) libft/libft.a

clean:
	make -C ./libft/ clean
	/bin/rm -f $(SRC_O)

fclean: clean
	make -C ./libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all
