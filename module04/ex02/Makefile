.PHONY: all clean fclean re

NAME			= ex02

SOURCE			= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp \
					WrongCat.cpp Brain.cpp
HEADERS			= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp \
					Brain.hpp

OBJECT			=	$(SOURCE:.cpp=.o)

CXX				= 	c++

CXXFLAGS		= 	-Wall -Wextra -Werror -std=c++98

RESET			= 	\033[0m
GREEN 			= 	\033[38;5;46m
WHITE 			= 	\033[38;5;15m
GREY 			= 	\033[38;5;8m
ORANGE 			= 	\033[38;5;202m
RED 			= 	\033[38;5;160m

all: $(NAME)

%.o: %.cpp $(HEADERS)
	@echo "$(GREY)Compiling...				$(WHITE)$<"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	@echo "$(GREEN)----------------------------------------------------"
	@$(CXX) $(CXXFLAGS) $(OBJECT) -o $(NAME)
	@echo "Executable				./$(NAME) $(RESET)"

clean:
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(OBJECT)
	@echo "$(WHITE)REMOVED O-FILES $(RESET)"

fclean: clean
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(NAME)
	@echo "$(WHITE)REMOVED EXECUTABLE FILE $(RESET)"

re: fclean all

