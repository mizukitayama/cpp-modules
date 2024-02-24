NAME	= megaphone

CPP		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= megaphone.cpp

RM		= rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CPP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all
