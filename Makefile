# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnunez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/23 14:11:34 by pnunez            #+#    #+#              #
#    Updated: 2018/03/25 16:07:35 by pnunez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Werror -Wextra libft/*.c -I libft/libft.h
	@echo "$(pnunez)GNL:\t\tUse ./GNL followed by file to execute.$(NOC)"
	@echo "======"
	@ar -q libft.a *.o
	@gcc -Wall -Wextra -Werror -g -L. -lft *.c -o GNL

clean:
	@rm -rf *.o *.a
	@echo "$(pnunez)GNL:\t\tRemoving OBJ path: ./obj/$(NOC)"

fclean: clean
	@rm -rf fillit
	@echo "$(pnunez)GNL:\t\tRemoving GNL executable$(NOC)"

re: fclean all
	@echo "$(pnunez)GNL:\t\tRecreating GNL executables."

