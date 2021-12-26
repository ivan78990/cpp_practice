NAME 		= megaphone

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp

RM 			= rm -f

.PHONY 	: all clean fclean re

all: $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean: clean
	@$(RM) $(NAME) $(BONUS_NAME)

re: 	fclean all