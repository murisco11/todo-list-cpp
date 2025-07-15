CPP = g++
CPPFLAGS = -Wall -std=c++17
TARGET = todolist
FILES = include/tarefa.hpp
SRC = src/main.cpp src/tarefa.cpp

${TARGET}: ${FILES} ${SRC}
	${CPP} ${CPPFLAGS} -o ${TARGET} ${SRC}

clean:
	rm -f ${TARGET} *.o
 