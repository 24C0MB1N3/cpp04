CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = abstract
FILE = main.cpp Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = $(FILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Cat.hpp Dog.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
