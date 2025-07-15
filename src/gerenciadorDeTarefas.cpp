#include <iostream>
#include <algorithm>
#include "../include/gerenciadorDeTarefas.hpp"
#include "../include/tarefa.hpp"

void GerenciadorDeTarefas::adicionarTarefa(const Tarefa t)
{
    tarefas.push_back(t);
}

void GerenciadorDeTarefas::listarTarefas()
{
    for (const auto &tarefa : tarefas)
    {
        std::cout << tarefa;
    }
}

void GerenciadorDeTarefas::listarTarefasPorPrioridade()
{
    std::sort(tarefas.begin(), tarefas.end(), compararPorPrioridade);
    listarTarefas();
}

void GerenciadorDeTarefas::listarTarefasNaoConcluidas()
{
    for (const auto &tarefa : tarefas)
    {
        if (tarefa.getConcluida()) {
            std::cout << tarefa;
        }
    }
}

bool GerenciadorDeTarefas::marcarTarefaComoConcluida(int indice)
{
    tarefas[indice].marcarComoConcluida();
    return true;
}
