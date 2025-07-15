#include "../include/tarefa.hpp"

Tarefa::Tarefa() : descricao(""), prioridade(5), concluida(false)
{
}

Tarefa::Tarefa(const std::string &descricao, const int &prioridade, const bool &concluida) : descricao(descricao), prioridade(prioridade), concluida(concluida)
{
}

std::string Tarefa::getDescricao() const
{
    return descricao;
}

bool Tarefa::getConcluida() const
{
    return concluida;
}

int Tarefa::getPrioridade() const
{
    return prioridade;
}

void Tarefa::marcarComoConcluida()
{
    concluida = true;
}

bool Tarefa::operator<(const Tarefa &outra) const
{
    return descricao < outra.descricao;
}

std::ostream &operator<<(std::ostream &out, const Tarefa &t)
{
    out << t.getDescricao() << "\t" << "Prioridade (" << t.getPrioridade() << ")" << "\t" << (t.getConcluida() ? "Concluida" : "Nao concluida") << std::endl;
    return out;
}

bool compararPorPrioridade(const Tarefa &t1, const Tarefa &t2)
{
    return t1.getPrioridade() > t2.getPrioridade();
}
