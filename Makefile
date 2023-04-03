# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 16:44:06 by lumorale          #+#    #+#              #
#    Updated: 2023/04/03 12:26:35 by lumorale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	get_next_line.a

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra
RM				=	rm -f
AR				=	ar -rcs

#		COLORS		#
CYELLOW			=\033[1;33m
CGREEN			=\033[0;32m
CRED			=\033[0;91m
CRESET			=\033[0m

SRCS			=	src/get_next_line.c \


OBJS			=	$(SRCS:.c=.o)

%.o: %.c
				@$(CC) $(CFLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(AR) $(NAME) $(OBJS)
				@echo "\n$(CYELLOW)$(NAME) -> $(CGREEN) compiled$(CRESET)"

clean:
				@$(RM) $(OBJS)
				@echo "${CYELLOW}${NAME} $(CGREEN) -> ${CRED} objects files were deleted.${CRESET}"


fclean:			clean
				@$(RM) $(NAME)
				@echo "${CYELLOW}${NAME} $(CGREEN) -> ${CRED} was deleted.${CRESET}"


re:				fclean all

.PHONY:			all clean fclean re