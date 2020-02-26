#include "Aluno.hpp"

std::string Aluno::getNome()
{
    return nome;
}
// A funcao retorna -1 caso o indice esteja errado
float Aluno::getNota(int numeroDaNota = 0)
{
    --numeroDaNota;
    if (numeroDaNota <= 3 || numeroDaNota >= 0)

        return notas[numeroDaNota];
    else
        return -1;
}
void Aluno::setNome(string nome)
{
    this->nome = nome;
}
void Aluno::setNota(int numeroDaNota, float valor)
{
    --numeroDaNota;
    notas[numeroDaNota] = valor;
}
Aluno::Aluno(std::string nome, float nota1, float nota2, float nota3, float nota4)
{
    this->nome = nome;
    this->notas[0] = nota1;
    this->notas[1] = nota2;
    this->notas[2] = nota3;
    this->notas[3] = nota4;
}