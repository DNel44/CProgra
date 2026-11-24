#include <unistd.h>
int main(void) {
    int number= 6;
    int i = 0;
    while ( i < number) {
        write(1, "zer\n", 3);
        i++;
    }
    return 0;
}