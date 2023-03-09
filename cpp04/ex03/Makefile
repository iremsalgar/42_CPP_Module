NAME = ex03
SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJS = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
all: $(NAME)
$(NAME):    $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $@
clean:
		$(RM) $(OBJS)
fclean:     clean
		$(RM) $(NAME)
re:     fclean $(NAME)

.PHONY: all clean fclean re