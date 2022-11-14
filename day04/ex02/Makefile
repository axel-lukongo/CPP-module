NAME = exec
CC = c++
RM = rm -f
FLAGS = -Wall -Werror -Wextra -g -std=c++98

SRCS =	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

# INC = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

OBJS = $(SRCS:.cpp=.o) #$(INC)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	clear
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean test

.SILENT: $(OBJS)