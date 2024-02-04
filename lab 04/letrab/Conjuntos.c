#include <stdio.h>
#include <stdlib.h>
#include "Conjuntos.h"

struct conjunto {
    int t;
    int *a;
};

Conj* conj_cria(int t, int *a) {
    Conj* con = (Conj*)malloc(sizeof(Conj));
    if (con != NULL) {
        con->t = t;
        con->a = a;
    }
    return con;
}

void conj_libera (Conj* con) {
    free(con);
}

void conj_atribui (Conj* con, int t, int *a) {
    int aux[(con->t)+t], n = 0;
    for (int i = 0; i < ((con->t)+t); i++) {
        if (i <= (con->t)) {
            aux[i] = (con->a[i]);
        } else {
            aux[i] = a[n];
            n++;
        }
    }
    con->a = (int*)realloc(con->a, sizeof(int)*((con->t)+t));
    con->t = (con->t)+t;
    con->a = aux;
}

void conj_ver(Conj* con) {
    for (int i = 0; i < (con->t); i++) {
        printf(" %d", (con->a[i]));
    }
}

void conj_remove(Conj* con, int t, int *a) {
    int n = 0;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < (con->t); j++) {
            if ((con->a[j]) == a[i]) {
                for (int k = j; k < (con->t); k++) {
                    (con->a[k]) = (con->a[k+1]);
                }
            }
        }
    }
    con->a = (int*)realloc(con->a, sizeof(int)*((con->t)-t));
    con->t = (con->t)-t;
}

Conj* uniao(Conj* con, Conj* con2) {
    Conj *uni = conj_cria(con->t, con->a);
    conj_atribui(uni, con2->t, con2->a);
    for (int i = 0; i < (uni->t); i++) {
        for (int j = i+1; j < (uni->t); j++) {
            if ((uni->a[i]) == (uni->a[j])) {
                conj_remove(uni, 1, &uni->a[j]);
            }
        }
    }
    return uni;
}

Conj* intersec(Conj* con, Conj* con2){
    Conj *inter = conj_cria(con->t, con->a);
    for (int i = 0; i < (con->t); i++) {
        for (int j = 0; j < (con2->t); j++) {
            if ((con->a[i]) == (con2->a[j])) {
                conj_atribui(inter, 1, &(con->a[i]));
            }
        }
    }
    return inter;
}

Conj* diferen(Conj* con, Conj* con2) {
    Conj *dif = conj_cria(con->t, con->a);
    for (int i = 0; i < (con->t); i++) {
        for (int j = 0; j < (con2->t); j++) {
            if ((con->a[i]) != (con2->a[j])) {
                conj_atribui(dif, 1, &(con->a[i]));
            }
        }
    }
    return dif;
}