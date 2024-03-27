#include <stdio.h>
#include "lab06a.h"
//Fernando Favaro 12311bcc006 --- Eduarda Lopes 12311bcc033
int main() {
    Lista *lista = criar();

    // Inserir alguns alunos
    Aluno aluno1 = {1, "Fernando", 8.5};
    Aluno aluno2 = {2, "Maria", 7.0};
    Aluno aluno3 = {3, "Eduarda", 9.0};

    inserirInicio(lista, aluno1);
    inserirFim(lista, aluno2);
    inserirFim(lista, aluno3);

    // Mostrar a lista
    printf("Lista de alunos:\n");
    mostrar(lista);

    // Remover um aluno pelo início
    removerInicio(lista);

    // Mostrar a lista novamente após a remoção
    printf("Lista de alunos após remover o primeiro aluno:\n");
    mostrar(lista);

    // Remover um aluno pelo fim
    removerFim(lista);

    // Mostrar a lista novamente após a remoção
    printf("Lista de alunos após remover o último aluno:\n");
    mostrar(lista);

    // Buscar um aluno pelo número de matrícula
    Aluno alunoBuscado;
    int matriculaBuscada = 2;
    if (buscarItem(lista, matriculaBuscada, &alunoBuscado) == 0) {
        printf("Aluno encontrado: %s\n", alunoBuscado.nome);
    } else {
        printf("Aluno com matrícula %d não encontrado.\n", matriculaBuscada);
    }

    // Limpar a lista e liberar memória
    Limpar(lista);

    return 0;
}

