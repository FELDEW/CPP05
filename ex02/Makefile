NAME = a.out

SRCS = ./main.cpp ./Bureaucrat.cpp ./Form.cpp ./PresidentialPardonForm.cpp ./RobotomyRequestForm.cpp ./ShrubberyCreationForm.cpp

HEADER = ./Bureaucrat.hpp ./Form.hpp ./PresidentialPardonForm.hpp ./RobotomyRequestForm.hpp ./ShrubberyCreationForm.hpp

OBJS = $(SRCS:%.cpp=%.o)

DEPENDS = $(OBJS:%.o=%.d)

CLANG =     clang++

CPPFLAGS =  -Wall -Wextra -Werror -std=c++98 -I.

RM =        rm -f

all :       ${NAME}

$(NAME) :   $(OBJS) 
			$(CLANG) $(CPPFLAGS) $(OBJS) -o $@

%.o:  %.cpp $(HEADER)
			${CLANG} $(CPPFLAGS) -MMD -o $@ -c $<

-include	$(DEPENDS)

clean :     
			$(RM) $(OBJS)
			$(RM) $(DEPENDS)


fclean  :   clean
			$(RM) ${NAME}

re :        fclean all

.PHONY :    all clean fclean re