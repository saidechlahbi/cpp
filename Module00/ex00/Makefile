CC = c++
CFLAGS = -Wall -Wextra -Werror  -std=c++98

FILES = megaphone.cpp

OBJ_FILES = $(FILES:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re 

