NAME = Identify
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INC = Base.hpp A.hpp B.hpp C.hpp
SRCS = Base.cpp A.cpp B.cpp C.cpp main.cpp
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