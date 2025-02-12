NAME		=		Interface

SRCS		=		AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp
OBJS		=		$(SRCS:.cpp=.o)

HEADERS		=		AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

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

.PHONEY: clean
