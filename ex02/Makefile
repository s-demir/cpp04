NAME			= brain
CXX				= c++
CXXFLAGS		= -Wall -Werror -Wextra -std=c++98
RM				= rm -rf

OBJS_DIR		= obj
SRCS			= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS			= $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

all:			$(OBJS_DIR) $(NAME)

$(OBJS_DIR):
				mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.cpp
				$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME):		$(OBJS) Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY: all clean fclean re
