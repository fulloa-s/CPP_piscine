# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 16:46:02 by fulloa-s          #+#    #+#              #
#    Updated: 2021/11/26 11:17:05 by fulloa-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=		Serialization

SRCS			=		main.cpp \

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
