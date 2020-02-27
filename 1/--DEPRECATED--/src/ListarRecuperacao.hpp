#include <iostream>
#include "Aluno.hpp"
#include <vector>

void listarRecuperacao(vector<Aluno> pendentes)
{
    int NF = 0;
    cout << "Lista de Alunos em recuperacao" << endl;
    for (auto &&i : pendentes)
    {
        NF = ((i.getNota(1) + i.getNota(2)) / 4 + i.getNota(3) + (2 * i.getNota(4)) / 4);
        if (NF >= 35)
        {
            cout << i.getNome() << endl;
        }
    }
}