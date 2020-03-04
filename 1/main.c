#include <stdio.h>
#include <stdlib.h>

#include "arq.h"
void cadastroAluno()
{
    Aluno aluno;
    printf("Escreva o nome: ");
    scanf("%s", aluno.nome);
    printf("Escreva a nota 1: ");
    scanf("%f", &aluno.nota1);
    printf("Escreva a nota 2: ");
    scanf("%f", &aluno.nota2);
    printf("Escreva a nota 3: ");
    scanf("%f", &aluno.nota3);
    printf("Escreva a nota 4: ");
    scanf("%f", &aluno.nota4);
    float NF = ((aluno.nota1 + aluno.nota2) / 4 + aluno.nota3 + (2 * aluno.nota4)) / 4;
    if (NF >= 60)
        insertAluno(aluno, "alunos.txt");
    else
        insertAluno(aluno, "pendentes.txt");
}

void menu_GUI()
{
    printf("\t\tMENU\n");
    printf("1.)Cadastrar Aluno\n");
    printf("2.)Listar Alunos Aprovados\n");
    printf("3.)Lista Alunos Em Recuperacao\n");
    printf("0.)Sair\n");
    printf(">");
}
void menu()
{
    int op = 0;
    do
    {
        menu_GUI();
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            cadastroAluno();
            break;
        case 2:
            listarAlunosAprovados();
            break;
        case 3:
            listarAlunosEmRecuperacao();
            break;
        case 0:
            exit(0);
            break;
        default:
            break;
        }
    } while (1);
}
int main(int argc, char const *argv[])
{
    if (init() == -1)
        exit(-1);
    menu();
    return 0;
}
