# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francesco <francesco@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 16:46:02 by fulloa-s          #+#    #+#              #
#    Updated: 2021/11/24 11:42:22 by francesco        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=		exForm

SRCS			=		main.cpp \
						Bureaucrat.cpp \
						AForm.cpp \
						ShrubberyCreationForm.cpp \
						RobotomyRequestForm.cpp \
						PresidentialPardonForm.cpp
				

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
						@rm -f *_shrubbery

fclean			:		clean
						@$(RM) $(NAME) 

re				:		fclean all

.PHONY			:		all clean fclean re
