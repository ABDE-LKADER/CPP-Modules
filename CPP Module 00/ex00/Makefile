NAME	=		megaphone

SRCS	=		megaphone.cpp
OBJS	=		$(SRCS:.cpp=.o)

CC		=		c++
FLAGS	=		-Wall -Wextra -Werror -std=c++98
RM		=		rm -fr

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $(NAME)

$(OBJS): %.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean
