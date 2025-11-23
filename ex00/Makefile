CXX = c++
CXXFCLAGS = -Wall -Wextra -Werror --std-98

SRCS = main.cpp  newZombie.cpp  randomChump.cpp  Zombie.cpp \

OBJS = $(SRCS:.cpp=.o)

NAME = zombie

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFCLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFCLAGS) $< -c $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re