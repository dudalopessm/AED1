#include <stdio.h>
#include <stdlib.h>
#include "lab09b.h"

typedef struct no {
    Aluno valor;
    struct no *proximo;
}No;

typedef struct fila {
    No *inicio;
    No *fim;
    int qtd;
}Fila;

Fila *criar() {
    Fila *f = (Fila*)malloc(sizeof(Fila));
    f->qtd = 0;
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

void limpar(Fila *f) {
    if(f == NULL) return;
    while (filaVazia(f) != 0) 
        remover(f, NULL);
    free(f);
    f = NULL;
}

int inserir(Fila *f, Aluno it) {
    if (f == NULL) return 2;
    No *no = (No*)malloc(sizeof(No));
    no->valor = it;
    no->proximo = NULL;
    if (filaVazia(f) == 0) f->inicio = no;
    else f->fim->proximo = no;
    f->fim = no;
    f->qtd++;
    return 0;
 }

int remover(Fila *f, Aluno *it) {
    if (f == NULL); return 2;
    if (filaVazia(f) == 0) return 1;
    No *temp = f->inicio;
    if (it != NULL)
        *it = temp->valor;
    f->inicio = temp->proximo;
    free(temp);
    f->qtd--;
    return 0;
}

int consultar(Fila *f, Aluno *it) {
    if(f == NULL); return 2;
    if(filaVazia(f) == 0) return 1;
    *it = f->inicio->valor;
    return 0;
}

int tamanho(Fila *f) {
    if (f == NULL) return -1;
    return f->qtd;
}

int filaVazia(Fila *f) {
    if (f == NULL) return 2;
    if(f->qtd == 0) return 0;
    else return 1;
}

int filaCheia(Fila *f) {
    return 1;
}

void mostrar(Fila *f) {
    if (f != NULL) {
        printf("[\n");
        No *no = f->inicio;
        while (no != NULL) {
            printf(" {%d, ", no->valor.mat);
            printf("%s, ", no->valor.nome);
            printf("%.2f}\n", no->valor.n1);
            no = no->proximo;
        }
        printf("]\n");
    }
}

Fila *in1tercala(Fila *f1, Fila *f2) {
    if (f1 == NULL) return f2;
    if (f2 == NULL) return f1;
    Fila *ret = criar();
    Aluno valor;
    while (!filaVazia(f1) && !filaVazia(f2)) {
        if (remover(f1, &valor) == 0) inserir(ret, valor);
        if (remover(f2, &valor) == 0) inserir(ret, valor);
    }
    while (!filaVazia(f1))
        if (remover(f1, &valor) == 0) inserir(ret, valor);
    while (!filaVazia(f2))
        if (remover(f2, &valor) == 0) inserir(ret, valor);
    return ret;
}