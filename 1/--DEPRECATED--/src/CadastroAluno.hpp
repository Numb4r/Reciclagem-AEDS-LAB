#include <iostream>
#include "Aluno.hpp"
Aluno cadastrarAluno()
{
    string nome;
    float notas[4];
    while (nome.empty())
    {
        cout << "Entre com o nome do aluno: ";
        cin >> nome;
    }
    cout << "Entre com as notas" << endl;
    for (auto &&i : notas)
    {
        cin >> i;
    }
    Aluno aluno = Aluno(nome, notas[0], notas[1], notas[2], notas[3]);
    return aluno;
}