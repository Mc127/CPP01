CXX = c++
CXXFCLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = HumanA.cpp HumanB.cpp main.cpp  Weapon.cpp \

OBJS = $(SRCS:.cpp=.o)

NAME = attack

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