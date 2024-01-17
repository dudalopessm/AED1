#include <stdio.h>
int main () {
    printf("\n\n######## Troca de valores com ponteiros ########");
    int x, y, a;
    a = 0;
    int *p1, *p2, *p3;
    printf("\n\nDigite o primeiro valor: ");
    setbuf(stdin, NULL);
    scanf("%d", &x);
    printf("\n\nDigite o segundo valor: ");
    setbuf(stdin, NULL);
    scanf("%d", &y);
    p1 = &x;
    p2 = &y;
    p3 = &a;
    *p3 = x;
    *p1 = y;
    *p2 = *p3;
    printf("\n\nO primeiro valor eh %d e o segundo eh %d.", x, y);
    printf("\n\n######## Fim ########");
    printf("\n");
    return 0;
}