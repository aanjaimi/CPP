NAME = Whatever
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INC = Whatever.hpp
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -rf

all : $(NAME) $(INC)
$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(INC)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean:clean
	@$(RM) $(NAME)

re:fclean all