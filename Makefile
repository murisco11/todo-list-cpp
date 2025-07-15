CPP = g++
CPPFLAGS = -Wall -std=c++17
TARGET = todolist
FILES = include/tarefa.hpp include/gerenciadorDeTarefas.hpp
SRC = src/main.cpp src/tarefa.cpp src/gerenciadorDeTarefas.cpp

${TARGET}: ${FILES} ${SRC}
	${CPP} ${CPPFLAGS} -o ${TARGET} ${SRC}

clean:
	rm -f ${TARGET} *.o
 