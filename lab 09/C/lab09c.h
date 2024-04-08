#define MAX 100
typedef struct fila Fila;
typedef struct aluno{
    int mat;
    char nome [30];
    float n1;
}Aluno;
Fila *criar();
void limpar(Fila *f);
int inserir(Fila *f, Aluno it);
int remover(Fila *f, Aluno *it);
int consultar(Fila *f, int *it);
int tamanho(Fila *f);
int filaVazia(Fila *f);
int filaCheia(Fila *f);
Fila *intercala(Fila *f1, Fila *f2);
int removeNegativos(Fila *f);