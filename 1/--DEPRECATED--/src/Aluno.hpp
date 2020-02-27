#include <iostream>
#ifndef __ALUNO_HPP
#define __ALUNO_HPP
using namespace std;
class Aluno
{
private:
    string nome;
    float notas[4];

public:
    string getNome();
    float getNota(int numeroDaNota);
    void setNome(string nome);
    void setNota(int numeroDaNota, float valor);
    Aluno(string nome, float nota1 = 0, float nota2 = 0, float nota3 = 0, float nota4 = 0);
};
#endif