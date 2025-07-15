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
    out << t.descricao << "\t" << "Prioridade (" << t.prioridade << ")" << "\t" << (t.concluida ? "Concluida" : "Nao concluida") << std::endl;
    return out;
}

bool compararPorPrioridade(const Tarefa &t1, const Tarefa &t2)
{
    return t1.prioridade > t2.prioridade;
}
