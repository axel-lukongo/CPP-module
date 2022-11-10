NAME = exec
CXX = c++
RM = rm -f
FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

# INC = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

OBJS = $(SRCS:.cpp=.o) #$(INC)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	clear
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean test

.SILENT: $(OBJS)