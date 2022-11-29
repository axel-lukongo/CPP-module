NAME = exec
CC = c++
RM = rm -f
FLAGS = -Wall -Werror -Wextra -g -std=c++98

SRCS =	main.cpp Span.cpp

INC = converter.hpp

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