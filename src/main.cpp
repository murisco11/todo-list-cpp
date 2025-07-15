#include <iostream>
#include <string>
#include "../include/tarefa.hpp"

int main () {
    Tarefa t1("Prova de C", 2, false);
    std::cout << t1;  
    t1.marcarComoConcluida();
    std::cout << t1;  
    return 0;
}