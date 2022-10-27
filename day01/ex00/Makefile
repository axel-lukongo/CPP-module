NAME = zombie
COMPILER = c++
RM = rm -f
FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp zombie.cpp randomChump.cpp newZombie.cpp

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