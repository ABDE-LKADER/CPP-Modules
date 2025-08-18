NAME		=		PmergeMe

SRCS		=		main.cpp PmergeMe.cpp
OBJS		=		$(SRCS:.cpp=.o)

HEADERS		=		PmergeMe.hpp

CC			=		c++
FLAGS		=		-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
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

.PHONY: clean
