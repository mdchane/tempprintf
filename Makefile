# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 09:49:18 by mdchane           #+#    #+#              #
#    Updated: 2018/12/26 11:13:21 by mdchane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = .

SRCS = *.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft/
	gcc -o $(NAME) $(OBJS) -L libft/ -lft

%.o: %.c libftprintf.h
	gcc -o $@ -c $< $(FLAGS) -I . -I libft/.

test:
	gcc -o printf *.c -L libft/ -lft
	./printf | cat -e

clean:
	make -C libft/ clean
	rm -f *.o

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)
	rm -f test

re: fclean all
