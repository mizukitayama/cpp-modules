NAME			= phonebook

CPP				= c++
FLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			= main.cpp PhoneBook.class.cpp Contact.class.cpp InputHandler.class.cpp
OBJ_DIR		= obj/
SRC_OBJS	= $(SRCS:=.o) 
OBJS			= $(addprefix $(OBJ_DIR), $(SRC_OBJS))

RM				= rm -rf

.PHONY: all clean fclean re


all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: %
	$(CPP) $(FLAGS) -o $@ -c $^

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
