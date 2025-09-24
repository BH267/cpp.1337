SRC = main.cpp
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)

RM = rm -f

NAME = sifl

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp 
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ) 
	$(RM) *.replace

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean
