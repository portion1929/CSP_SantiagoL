#include <stdio.h>

void names(char names[]){
    printf("hello %s\n", names);
}
int main(void){
    names("Strawberry_Banana0");
    names("Joanne");
    names("Tyler");
    names("The");
    names("Creator");
    return 0;
}