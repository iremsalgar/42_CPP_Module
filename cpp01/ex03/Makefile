NAME = humans
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS = $(SRC:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
all: $(NAME)
$(NAME):    $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $@
clean:
		$(RM) $(OBJS)
fclean:     clean
		$(RM) $(NAME)
re:     fclean $(NAME)
.PHONY: all clean fclean re