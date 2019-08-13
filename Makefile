# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/13 01:31:26 by Nik               #+#    #+#              #
#    Updated: 2019/08/13 01:39:20 by Nik              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER=checker.out

PUSH_SWAP=push_swap.out

SRCS1=checker/*.c

SRCS2=push_swap/*.c

INCLUDES=libft/libft.a utils/*.c

#FLAGS=-Werror -Wextra -Wall

all: $(NAME)
	@make -C libft/ all
	gcc -o $(CHECKER) $(FLAGS) $(SRCS1) $(INCLUDES)
	gcc -o $(PUSH_SWAP) $(FLAGS) $(SRCS2) $(INCLUDES)

clean:
	@make -C libft/ clean

fclean: clean
	/bin/rm -f $(CHECKER)
	/bin/rm -f $(PUSH_SWAP)
	@make -C libft/ fclean

re: fclean all