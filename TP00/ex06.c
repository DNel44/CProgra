#include <stdio.h>
int main(void){
int age;
age = 66;
if (age < 0){
    printf("Age invalide\n");
}
else if (age <=1){
    printf("bonjour bébé!\n");
}
else if (age <= 14){
    printf("bonjour mes petits!\n");
}
else if (age <= 30){
    printf("bonjour jeune homme!\n");
}
else if (age <= 60){
    printf("bonjour monsieur!\n");
}
else{
    printf("bonjour papi!\n");
}
return 0;
}