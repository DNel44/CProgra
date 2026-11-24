#include <stdio.h>
#include <math.h>

int main(void) {
    int a = 1;
    int b = -5;
    int c = 6;
    int delta = b * b - 4 * a * c;

    printf("Delta = %d\n", delta);
    if (delta < 0) {
        printf("Il n'existe aucune solution\n");
    } else if (delta == 0) {
        printf("Il existe 1 solution\n");
        printf("x = %f\n", -b / (2.0 * a));
    } else {
        printf("Il existe 2 solutions\n");
        printf("x1 = %f\n", (-b + sqrt(delta)) / (2.0 * a));
        printf("x2 = %f\n", (-b - sqrt(delta)) / (2.0 * a));
    }
    return 0;
}