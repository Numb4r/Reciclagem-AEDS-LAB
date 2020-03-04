#include "arq.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int init()
{
    FILE *fp;
    if (!(fp = fopen("alunos.txt", "r")))
    {
        if (!(fp = fopen("alunos.txt", "w")))
        {
            return -1;
        }
    }

    fclose(fp);
    if (!(fp = fopen("pendentes.txt", "r")))
    {
        if (!(fp = fopen("pendentes.txt", "w")))
        {
            return -1;
        }
    }
    fclose(fp);
    return 1;
}
int insertAluno(Aluno aluno, char *arq)
{
    FILE *fp;
    if (!(fp = fopen(arq, "a")))
        return -1;
    fprintf(fp, "%s\n", aluno.nome);
    fprintf(fp, "%f\n", aluno.nota1);
    fprintf(fp, "%f\n", aluno.nota2);
    fprintf(fp, "%f\n", aluno.nota3);
    fprintf(fp, "%f\n", aluno.nota4);
    fclose(fp);
}
//TODO: Fix duplicated print
int listarAlunosAprovados()
{
    Aluno aluno;
    float NF;
    FILE *fp;
    if (!(fp = fopen("alunos.txt", "r")))
    {
        return -1;
    }
    while (!feof(fp))
    {
        fscanf(fp, "%s", aluno.nome);
        fscanf(fp, "%f", &aluno.nota1);
        fscanf(fp, "%f", &aluno.nota2);
        fscanf(fp, "%f", &aluno.nota3);
        fscanf(fp, "%f", &aluno.nota4);
        NF = ((aluno.nota1 + aluno.nota2) / 4 + aluno.nota3 + (2 * aluno.nota4)) / 4;
        if (strlen(aluno.nome) != 0 && NF > 60)
            printf("%s %f %f %f %f\n", aluno.nome, aluno.nota1, aluno.nota2, aluno.nota3, aluno.nota4);
    }

    fclose(fp);
}
int listarAlunosEmRecuperacao()
{
    float NF;
    Aluno aluno;
    FILE *fp;
    if (!(fp = fopen("pendentes.txt", "r")))
    {
        return -1;
    }
    while (!feof(fp))
    {
        fscanf(fp, "%s", aluno.nome);
        fscanf(fp, "%f", &aluno.nota1);
        fscanf(fp, "%f", &aluno.nota2);
        fscanf(fp, "%f", &aluno.nota3);
        fscanf(fp, "%f", &aluno.nota4);
        NF = ((aluno.nota1 + aluno.nota2) / 4 + aluno.nota3 + (2 * aluno.nota4)) / 4;
        if (strlen(aluno.nome) != 0 && NF >= 35)

            printf("%s %f %f %f %f\n", aluno.nome, aluno.nota1, aluno.nota2, aluno.nota3, aluno.nota4);
    }

    fclose(fp);
}