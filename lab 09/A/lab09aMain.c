#include <stdio.h>
#include <stdlib.h>
#include "lab09a.h"
//Fernando Favaro 12311bcc006 --- Eduarda Lopes 12311bcc033
int main() {
    Fila *fila = criar();

    Aluno aluno1 = {10, "Maria", 8.0};
    Aluno aluno2 = {20, "Pedro", 7.0};
    Aluno aluno3 = {30, "Carlos", 5.0};
    Aluno aluno4 = {45, "Leticia", 9.0};
    Aluno aluno5 = {21, "Heli", 2.0};

    inserir(fila, 10);
    mostrar(fila);

    inserir(fila, 20);
    mostrar(fila);

    remover(fila);
    mostrar(fila);

    inserir(fila, 30);
    mostrar(fila);

    inserir(fila, 45);
    mostrar(fila);

    inserir(fila, 21);
    mostrar(fila); 

    remover(fila);
    mostrar(fila);

    remover(fila);
    mostrar(fila);
}
