#ifndef TAREFA_HPP
#define TAREFA_HPP

#include <iostream>
#include <string>

class Tarefa
{
private:
    std::string descricao;
    int prioridade;
    bool concluida;

public:
    Tarefa();
    Tarefa(const std::string& descricao, const int& prioridade, const bool& concluida);

    std::string getDescricao() const;
    bool getConcluida() const;
    int getPrioridade() const;
    void marcarComoConcluida();
    bool operator<(const Tarefa& outra) const;
    friend std::ostream& operator<<(std::ostream&, const Tarefa& t);
};

bool compararPorPrioridade(const Tarefa& t1, const Tarefa& t2);

#endif