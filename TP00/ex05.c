#include <stdio.h>
int main(void){
int number;
number = 421;
if (number % 2 == 0){
    printf("%d est pair\n", number);
}
else{
    printf("%d est impair\n", number);
}
return 0;
}