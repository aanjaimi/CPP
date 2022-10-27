NAME = Animal
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INC = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
SRCS = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -rf

all : $(NAME)
$(NAME):$(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(INC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean:clean
	@$(RM) $(NAME)

re:fclean all