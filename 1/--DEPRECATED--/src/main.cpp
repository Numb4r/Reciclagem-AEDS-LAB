#include <iostream>
#include <vector>
#include "Aluno.hpp"
#include "CadastroAluno.hpp"
#include "ListarAprovados.hpp"
#include "ListarRecuperacao.hpp"
vector<Aluno> alunos;
vector<Aluno> pendentes;
void menu_GUI()
{
    cout << "\t\tM\tE\tN\tU" << endl;
    cout << "1.)Cadastrar Aluno" << endl;
    if (!alunos.empty())
    {
        cout << "2.)Listar Alunos Aprovados" << endl;
    }

    if (!pendentes.empty())
    {
        cout << "3.)Listas Alunos em Recuperacao" << endl;
    }
    cout << "0.)Sair" << endl;
}
void menu()
{
    int op = 0;
    do
    {
        menu_GUI();
        cin >> op;
        switch (op)
        {
        case 1:
            alunos.push_back(cadastrarAluno());
            break;
        case 2:
            if (!alunos.empty())
            {
                listarAprovados(&alunos, &pendentes);
            }

            break;
        case 3:
            if (!pendentes.empty())
            {
                listarRecuperacao(pendentes);
            }
            break;
        case 0:
            exit(0);
            break;
        }

    } while (true);
}
int main()
{
    menu();
    return 0;
}
