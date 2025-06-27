SRC = megaphone.cpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g 
OBJ = $(SRC:.cpp=.o)

RM = rm -f

NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ) 

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean
