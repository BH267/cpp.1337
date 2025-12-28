SRC = main.cpp Base.cpp funcs.cpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)

RM = rm -f

NAME = IRT

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ) 

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean
