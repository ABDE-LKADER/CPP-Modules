NAME	=		phonebook

SRCS	=		phonebook.cpp
OBJS	=		$(SRCS:.cpp=.o)

HEADER	=		phonebook.hpp

CC		=		c++
FLAGS	=		-Wall -Wextra -Werror
RM		=		rm -fr

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $(NAME)

$(OBJS): %.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
