SRC = src/main.cpp \
	src/scalar.cpp \
	src/scalar_bis.cpp \

NAME = Scalar

INCLUDE = -I ./include

DEP = ${SRC:.cpp=.d}

CC = c++

CFLAGS = -MMD -Wall -Wextra -Werror ${INCLUDE} -std=c++98 -g 

OBJ = $(SRC:.cpp=.o) 

all: ${NAME} 

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):		$(OBJ)
				@${CC} ${CFLAGS}  -o ${NAME} ${OBJ}
				@echo "${YELLOW}          [OK]\n"

-include $(DEP)
clean:
	rm -f ${OBJ}
	rm -f $(DEP)
	
fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY: clean re fclean all