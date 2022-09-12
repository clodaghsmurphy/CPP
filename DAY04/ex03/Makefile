SRC = main.cpp \
	Animal.cpp \
	WrongAnimal.cpp \
	Dog.cpp \
	Cat.cpp \
	Brain.cpp \

NAME = Abstract

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g 

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