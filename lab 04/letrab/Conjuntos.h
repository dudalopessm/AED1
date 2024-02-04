#ifndef Conjuntos_h
#define Conjuntos_h
typedef struct conjunto Conj;
Conj* conj_cria(int t, int *a);
void conj_libera (Conj* con);
void conj_acessa (Conj* con, int *t, int *a);
void conj_atribui (Conj* con, int t, int *a);
void conj_ver(Conj* con);
void conj_remove(Conj* con, int t, int *a);
Conj* uniao(Conj* con, Conj* con2);
Conj* intersec(Conj* con, Conj* con2);
Conj* diferen(Conj* con, Conj* con2);
#endif
