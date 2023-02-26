SRC = megaphone.cpp
OBJ = $(SRC:.cpp =.o)
CXX = g++
RM = rm -rf
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

all : $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re