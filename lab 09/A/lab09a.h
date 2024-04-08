#define MAX 100
typedef struct fila Fila;
typedef struct aluno{
    int mat;
    char nome [30];
    float n1;
}Aluno;
Fila *criar();
void limpar(Fila *f);
int inserir(Fila *f, int it);
int remover(Fila *f);
int consultar(Fila *f, int *it);
int tamanho(Fila *f);
int filaVazia(Fila *f);
int filaCheia(Fila *f);

