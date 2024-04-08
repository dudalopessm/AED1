#include <stdio.h>
#include <stdlib.h>
#include "lab09c.h"
//Fernando Favaro 12311bcc006 --- Eduarda Lopes 12311bcc033

int main() {
    Fila *fila = criar();

    Aluno aluno6 = {77, "Diulia", 10.0};
    Aluno aluno7 = {69, "Joao Caio", 6.5};
    Aluno aluno8 = {55, "Lucas", 7.5};
    Aluno aluno9 = {33, "Eduarda", 1.0};
    Aluno aluno10 = {9, "Fernando", 9.5};
    Aluno aluno11 = {-15, "Vitor", 5.0};
    Aluno aluno12 = {-2, "Samira", 2.0};

    insere(fila, aluno6);
    insere(fila, aluno7);
    insere(fila, aluno8);
    insere(fila, aluno9);
    insere(fila, aluno10);
    insere(fila, aluno11);
    insere(fila, aluno12);

    mostrar(fila);

    removeNegativos(fila);

    mostrar(fila);
}