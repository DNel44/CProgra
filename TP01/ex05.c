#include <stdio.h>
int main(void) {
    int a = 8;
    int i = a;
    int resultat = 0;
    while (i != 0) {
        resultat += i;
        i--;
    }
    printf("La somme cumulative de 1 à %d est %d\n", a, resultat);
    return 0;
}