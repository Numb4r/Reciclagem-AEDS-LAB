#include <iostream>
#include <vector>
#include "Aluno.hpp"
void listarAprovados(vector<Aluno> *alunos, vector<Aluno> *pendentes)
{
    float NF = 0;
    cout << "Lista de aprovados" << endl;
    for (size_t i = 0; i < alunos->size(); i++)
    {
        NF = ((alunos->at(i).getNota(1) + alunos->at(i).getNota(2)) / 4 + alunos->at(i).getNota(3) + (2 * alunos->at(i).getNota(4))) / 4;
        if (NF >= 60)
        {
            cout << alunos->at(i).getNome() << endl;
        }
        else
        {
            pendentes->push_back(alunos->at(i));
            alunos->erase(alunos->begin() + i);
        }
    }
}
