NAME = a.out

SRCS = ./main.cpp ./Bureaucrat.cpp ./Form.cpp

HEADER = ./Bureaucrat.hpp ./Form.hpp

OBJS = $(SRCS:cpp=o)

%.o:        %.cpp $(HEADER)
			${CLANG} $(CPPFLAGS) -c $< -o ${<:.cpp=.o}

CLANG =     clang++

CPPFLAGS =  -Wall -Wextra -Werror -std=c++98

RM =        rm -f

all :       ${NAME}

$(NAME) :   $(OBJS) 
			$(CLANG) $(CPPFLAGS) -o ${NAME} $(OBJS) -I.

clean :     
			$(RM) $(OBJS)

fclean  :   clean
			$(RM) ${NAME}

re :        fclean all

.PHONY :    all clean fclean re