#include <iostream>
#include <string>
#include <limits>
#include "../include/tarefa.hpp"
#include "../include/gerenciadorDeTarefas.hpp"

void exibirMenu()
{
    std::cout << "\n--- Gerenciador de Tarefas ---\n";
    std::cout << "1. Adicionar nova tarefa\n";
    std::cout << "2. Listar todas as tarefas\n";
    std::cout << "3. Listar tarefas por prioridade\n";
    std::cout << "4. Marcar tarefa como concluida\n";
    std::cout << "5. Sair\n";
    std::cout << "Escolha uma opcao: ";
}

Tarefa criaTarefa()
{
    std::string descricao;
    std::string prioridadeString;
    int prioridadeInt;

    std::cout << "\nInsira a descricao:\n";
    std::getline(std::cin, descricao);
    while (true)
    {
        std::cout << "\nInsira a prioridade\n";
        std::getline(std::cin, prioridadeString);
        try
        {
            prioridadeInt = std::stoi(prioridadeString);
            break;
        }
        catch (const std::invalid_argument &e)
        {
            std::cerr << "Erro: Prioridade inválida. Por favor, insira apenas números.\n";
        }
    }

    Tarefa t(descricao, prioridadeInt, false);
    return t;
}

int main()
{
    std::cout << "\n--- Inicio de simulacao ---\n";
    GerenciadorDeTarefas gerenciador;
    int escolha;

    while (true)
    {
        exibirMenu();
        std::cin >> escolha;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (escolha)
        {
        case 1:
        {
            Tarefa novaTarefa = criaTarefa();
            gerenciador.adicionarTarefa(novaTarefa);
            std::cout << "\nTarefa adicionada com sucesso!\n";
            break;
        }
        case 2:
        {
            std::cout << "\nLista de Tarefas:\n";
            gerenciador.listarTarefas();
            std::cout << "Fim da Lista:\n";
            break;
        }

        default:
            std::cout << "\n--- Opcao Inválida ---\n";
            break;
        }
    }
    return 0;
}