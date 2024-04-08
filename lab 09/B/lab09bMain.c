#include <stdio.h>9
#include <stdlib.h>
#include "lab09b.h"
//Fernando Favaro 12311bcc006 --- Eduarda Lopes 12311bcc033

int main() {
    Fila *fila1 = criar();
    Fila *fila2 = criar();

    Aluno aluno1 = {10, "Maria", 8.0};
    Aluno aluno2 = {20, "Pedro", 7.0};
    Aluno aluno3 = {30, "Carlos", 5.0};
    Aluno aluno4 = {45, "Leticia", 9.0};
    Aluno aluno5 = {21, "Heli", 2.0};
    Aluno aluno6 = {77, "Diulia", 10.0};
    Aluno aluno7 = {69, "Joao Caio", 6.5};
    Aluno aluno8 = {55, "Lucas", 7.5};
    Aluno aluno9 = {33, "Eduarda", 1.0};
    Aluno aluno10 = {9, "Fernando", 9.5};

    inserir(fila1, aluno1);
    inserir(fila1, aluno2);
    inserir(fila1, aluno3);
    inserir(fila1, aluno4);
    inserir(fila1, aluno5);
    inserir(fila2, aluno6);
    inserir(fila2, aluno7);
    inserir(fila2, aluno8);
    inserir(fila2, aluno9);
    inserir(fila2, aluno10);

    Fila *intercala(fila1, fila2);

}


