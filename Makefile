# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 09:49:18 by mdchane           #+#    #+#              #
#    Updated: 2018/12/05 09:59:38 by mdchane          ###   ########.fr        #
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
	gcc -o $@ -c $< $(FLAGS) -I includes/ -I libft/includes/

test:
	make -C libft/
	gcc -c $(SRCS) $(FLAGS) -I includes/ -I libft/includes/
	gcc -o test $(OBJS) -L libft/ -lft

clean:
	make -C libft/ clean
	rm -f *.o

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)
	rm -f test

re: fclean all
