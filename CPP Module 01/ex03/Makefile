NAME		=		Attack

SRCS		=		main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS		=		$(SRCS:.cpp=.o)

HEADERS		=		Weapon.hpp HumanA.hpp HumanB.hpp

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
