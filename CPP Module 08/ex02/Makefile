NAME		=		MutantStack

SRCS		=		main.cpp
OBJS		=		$(SRCS:.cpp=.o)

HEADERS		=		MutantStack.hpp MutantStack.tpp

CC			=		clang++
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
