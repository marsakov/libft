#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msakovyc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/24 19:35:24 by msakovyc          #+#    #+#              #
#    Updated: 2018/03/24 19:35:28 by msakovyc         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=libft.a

SRCS = *.c

OFILES = *.o

HEADERS = -I libft.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRCS) $(HEADERS)
	@ar rc $(NAME) $(OFILES)

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all