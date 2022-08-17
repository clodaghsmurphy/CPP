SRC = Zombie.cpp \
	main.cpp \

NAME = Zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

OBJ = $(SRC:.cpp=.o) 

all: ${NAME} 

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):		$(OBJ)
				@${CC} ${CFLAGS}  -o ${NAME} ${OBJ}
				@echo "${YELLOW}          [OK]\n"

clean:
	rm -f *.o
	
fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY: clean re fclean