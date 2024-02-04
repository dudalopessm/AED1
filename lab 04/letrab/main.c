#include <stdio.h>
#include <stdlib.h>
#include "Conjuntos.h"

int main () {
    printf("######## Conjuntos com TAD ########");
    Conj *con1, *con2;
    int t1, t2, *b, *a;
    //inicio criação do conjunto A
    printf("\n\nDigite o numero de elementos do primeiro conjunto: ");
    scanf("%d", &t1);
    a = (int*)malloc(t1*sizeof(int));
    printf("\n\nDigite os elementos do primeiro conjunto: ");
    for (int i = 0; i < t1; i++) {
        scanf("%d", &a[i]);
    }
    con1 = conj_cria(t1, a);
    printf("\n\nO conjunto A corresponde a: ");
    conj_ver(con1);
    free(a);
    //fim da criação do conjunto A
    //inicio criação do conjunto B
    printf("\n\nDigite o numero de elementos do segundo conjunto: ");
    scanf("%d", &t2);
    b = (int*)malloc(t2*sizeof(int));
    printf("\n\nDigite os elementos do segundo conjunto: ");
    for (int i = 0; i < t2; i++) {
        scanf("%d", &b[i]);
    }
    printf("\n\nConjunto digitado: ");
    for (int i = 0; i < t2; i++) {
        printf(" %d", b[i]);
    }
    con2 = conj_cria(t2, b);
    printf("\n\nO conjunto B corresponde a: ");
    conj_ver(con2);
    free(b);
    //fim criação do conjunto B
    //inicio das inserções
    int aux1, aux2, n1, n2, *A, *B;
    printf("\n\nDigite 1 se quiser inserir um elemento em algum conjunto: ");
    scanf("%d", &aux1);
    if (aux1 == 1) {
        printf("\n\nQual conjunto voce deseja inserir elementos? 1 para A ou 2 para B: ");
        scanf("%d", &aux2);
        if (aux2 == 1) {
            printf("\n\nDigite a quantidade de elementos que deseja inserir no conjunto A: ");
            scanf("%d", &n1);
            A = (int*)malloc(n1*sizeof(int));
            printf("\n\nDigite os elementos que deseja inserir no conjunto A: ");
            for (int i = 0; i < n1; i++) {
                scanf("%d", &A[i]);
            }
            printf("\n\nInserindo os elementos...: ");
            for (int i = 0; i < n1; i++) {
                printf(" %d", A[i]);
            }
            conj_atribui(con1, n1, A);
            free(A);
        } else if (aux2 == 2) {
            printf("\n\nDigite a quantidade de elementos que deseja inserir no conjunto B: ");
            scanf("%d", &n2);
            B = (int*)malloc(n2*sizeof(int));
            printf("\n\nDigite os elementos que deseja inserir no conjunto B: ");
            for (int i = 0; i < n2; i++) {
                scanf("%d", &B[i]);
            }
            printf("\n\nInserindo os elementos...: ");
            for (int i = 0; i < n2; i++) {
                printf(" %d", B[i]);
            }
            conj_atribui(con2, n2, B);
            free(B);
        }
    } else {
        printf("\n\nVoce optou por nao inserir nenhum elemento. Continuando...");
    }
    //fim das inserções
    //inicio das remoções
    int aux3, aux4, n3, n4, *C, *D;
    printf("\n\nDigite 1 se quiser remover um elemento em algum conjunto: ");
    scanf("%d", &aux3);
    if (aux3 == 1) {
        printf("\n\nQual conjunto voce deseja remover elementos? 1 para A ou 2 para B: ");
        scanf("%d", &aux4);
        if (aux4 == 1) {
            printf("\n\nDigite a quantidade de elementos que deseja remover no conjunto A: ");
            scanf("%d", &n3);
            C = (int*)malloc(n3*sizeof(int));
            printf("\n\nDigite os elementos que deseja remover no conjunto A: ");
            for (int i = 0; i < n3; i++) {
                scanf("%d", &C[i]);
            }
            printf("\n\nRemovendo os elementos...: ");
            for (int i = 0; i < n3; i++) {
                printf(" %d", C[i]);
            }
            conj_remove(con1, n3, C);
            free(C);
        } else if (aux4 == 2) {
            printf("\n\nDigite a quantidade de elementos que deseja remover no conjunto B: ");
            scanf("%d", &n4);
            D = (int*)malloc(n4*sizeof(int));
            printf("\n\nDigite os elementos que deseja remover no conjunto B: ");
            for (int i = 0; i < n4; i++) {
                scanf("%d", &D[i]);
            }
            printf("\n\nRemovendo os elementos...: ");
            for (int i = 0; i < n4; i++) {
                printf(" %d", D[i]);
            }
            conj_remove(con2, n4, D);
            free(D);
        }
    } else {
        printf("\n\nVoce optou por nao remover nenhum elemento. Continuando...");
    }
    //fim das remoções
    //inicio operações entre conjuntos
    Conj *u, *in, *dif1, *dif2;
    u = uniao(con1, con2);
    in = intersec(con1, con2);
    dif1 = diferen(con1, con2);
    dif2 = diferen(con2, con1);
    printf("\n\nUniao do conjunto A e B: ");
    conj_ver(u);
    printf("\n\nInterseccao do conjunto A e B: ");
    conj_ver(in);
    printf("\n\nDiferenca dos conjuntos A - B: ");
    conj_ver(dif1);
    printf("\n\nDiferenca dos conjuntos B - A: ");
    conj_ver(dif2);
    //fim operações entre conjuntos
    //inicio liberação de memoria
    conj_libera(con1);
    conj_libera(con2);
    conj_libera(u);
    conj_libera(in);
    conj_libera(dif1);
    conj_libera(dif2);
    //fim da liberação de memoria
    printf("\n\n######## Obrigada por usar. ########");
    return 0;
}