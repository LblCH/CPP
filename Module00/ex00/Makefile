NAME = megaphon

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS = megaphon.cpp

OBJS = $(SRCS:.cpp=.o)

$(%.o): $(%.cpp)
	$(CC) -o $@ -c $^

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	@echo "\033[0;31m"
	@echo "\nDeleting binaries..."
	@rm -f $(OBJS)
	@echo "\033[0m"

fclean:
	@echo "\033[0;31m"
	@echo "\nDeleting objects..."
	@rm -f $(OBJS)
	@echo "\nDeleting executable..."
	@rm -f $(NAME)
	@echo "\033[0m"

re: fclean all