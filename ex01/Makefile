CXX = c++
CXXFCLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp  Makefile  Zombie.cpp  zombieHorde.cpp  Zombie.hpp\

OBJS = $(SRCS:.cpp=.o)

NAME = zombie

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFCLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFCLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re