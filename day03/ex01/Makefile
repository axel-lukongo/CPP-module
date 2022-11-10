NAME = exec
CXX = c++
RM = rm -f
FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRCS =	main.cpp ClapTrap.cpp ScavTrap.cpp

INC = ClapTrap.hpp ScavTrap.hpp

OBJS = $(SRCS:.cpp=.o) $(INC)

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

# NAME = exec
# CXX = c++
# RM = rm -f
# FLAGS = -Wall -Werror -Wextra -std=c++98

# SRCS =	main.cpp Fixed.cpp

# INC = Fixed.hpp

# OBJS =  $(SRCS:.cpp=.o)

# all: $(NAME)

# $(NAME): $(OBJS) $(OBJ_DIR) $(INC)
# 	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

# 	#OBJET/%.o : %.cpp $(INC) 
# 	#	$(CXX) -c $< -o $@

# clean:
# 	clear
# 	$(RM) *.o

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all

# .PHONY: all re clean fclean test

# #.SILENT: $(OBJS)
# ➜  ex02 git:(master) ✗ 
