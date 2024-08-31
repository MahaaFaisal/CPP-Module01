CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Harl.cpp Harl.hpp main.cpp
NAME = harl

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all