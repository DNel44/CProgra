#include <stdio.h>
int main(void) {
    int a=47;
    while ( a <= 1337) {
        if (a % 2 == 0) {
            printf("%d\n", a);
        }
        a++;
    }
    return 0;
}