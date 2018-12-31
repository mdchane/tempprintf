# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 09:49:18 by mdchane           #+#    #+#              #
#    Updated: 2018/12/31 09:55:36 by mdchane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADERS = .

SRCS = printf.c get_format.c \
	get_type_token.c printf_format.c \
	utils.c int_precision.c \
	aff_c.c aff_p.c \
	aff_di.c aff_percent.c \
	aff_o.c aff_s.c \
	aff_u.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft/
	cp libft/libft.a ./$(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	gcc -o $@ -c $< -Wall -Wextra -Werror -I . -I libft/

test:
	gcc -o printf main.c libftprintf.a
	./printf | cat -e

clean:
	make -C libft/ clean
	rm -f $(OBJS)

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)
	rm -f printf

re: fclean all
