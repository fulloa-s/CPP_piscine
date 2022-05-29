# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francesco <francesco@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 16:46:02 by fulloa-s          #+#    #+#              #
#    Updated: 2021/11/14 18:40:29 by francesco        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=		fixed

SRCS			=		main.cpp \
						Fixed.cpp

CXX				=		clang++

CXXFLAGS		=		-Wall -Wextra -Werror -std=c++98

OBJCS			=		$(SRCS:.cpp=.o)

RM				=		rm -f

%.o				: 		%.cpp
						@$(CXX) $(CXXFLAGS) -c $<

$(NAME)			:		$(OBJCS)
						@$(CXX) -o $(NAME) $(OBJCS)

all				:		$(NAME)

clean			:
						@$(RM) $(OBJCS)

fclean			:		clean
						@$(RM) $(NAME) 

re				:		fclean all

.PHONY			:		all clean fclean re
