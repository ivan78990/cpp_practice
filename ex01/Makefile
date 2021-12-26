NAME		= oldphone

CC   		= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

SRC 		= Oldphone.cpp Phonebook.cpp main.cpp

HEADERS 	= Oldphone.hpp Phonebook.hpp

RM			= rm -f

.PHONY	:	all clean fclean re

all: $(NAME)

$(NAME) : $(SRC) $(HEADERS)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	
fclean: clean
	@$(RM) $(NAME) $(BONUS_NAME)

re:		fclean all
