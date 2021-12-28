NAME 		= account

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

SRC			= Account.cpp tests.cpp

HEADER		= Account.hpp

RM			= rm -f

.PHONY	: all clean fclean re

all: $(NAME)

$(NAME) : $(SRC) $(HEADER)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	@$(RM) $(NAME) 
	
re: fclean all