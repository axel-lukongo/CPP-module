NAME = repertory
COMPILER = c++
RM = rm -f
FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	Contact.cpp phonebook.cpp main.cpp
INC = contact.hpp phonebook.hpp

OBJS = $(SRCS:.cpp=.o) $(INC)

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	clear
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean test

.SILENT: $(OBJS)