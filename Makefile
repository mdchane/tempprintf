# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchane <dchane@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 09:49:18 by mdchane           #+#    #+#              #
#    Updated: 2018/12/14 15:38:43 by dchane           ###   ########.fr        #
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
	make -C libft/
	gcc -o printf *.c -L libft/ -lft

clean:
	make -C libft/ clean
	rm -f *.o

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)
	rm -f test

re: fclean all
