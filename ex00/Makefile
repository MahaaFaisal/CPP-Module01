CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
NAME = zombie

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all