#include "aluno.h"
#ifndef ARC_H
#define ARC_H
int init();
int insertAluno(Aluno aluno, char *arq);
//TODO: Fix duplicated print
int listarAlunosAprovados();
int listarAlunosEmRecuperacao();
#endif