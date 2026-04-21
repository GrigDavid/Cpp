CC = c++ -Wall -Wextra -Werror -std=c++98#should it be called CC? idk
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = megaphone


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $^ -o $@

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re