NAME		=		Zombie

SRCS		=		Zombie.cpp zombieHorde.cpp main.cpp
OBJS		=		$(SRCS:.cpp=.o)

HEADERS		=		Zombie.hpp

CC			=		c++
FLAGS		=		-Wall -Wextra -Werror -std=c++98
RM			=		rm -fr

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $(NAME)

$(OBJS): %.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
