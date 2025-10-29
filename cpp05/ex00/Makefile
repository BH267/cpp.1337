SRC = main.cpp Bureaucrat.cpp
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)

RM = rm -f

NAME = Bureaucrat

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ) 

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean
