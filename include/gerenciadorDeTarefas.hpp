#ifndef GERENCIADOR_DE_TAREFAS_HPP
#define GERENCIADOR_DE_TAREFAS_HPP
#include "../include/tarefa.hpp"
#include <vector>
#include <string>

class GerenciadorDeTarefas
{
private:
    std::vector<Tarefa> tarefas;

public:
    void adicionarTarefa(const Tarefa t);
    void listarTarefas();
    void listarTarefasPorPrioridade();
    void listarTarefasNaoConcluidas();
    bool marcarTarefaComoConcluida(int indice);
};

#endif