NAME = exec
COMPILER = c++
RM = rm -f
FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp Weapon.cpp HumanB.cpp HumanA.cpp

OBJS = $(SRCS:.cpp=.o)

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