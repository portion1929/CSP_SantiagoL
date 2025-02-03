#include <stdio.h>
char name[20];
int main(void){
    printf("Enter your first name and press enter: \n");
    scanf("%s", name);
    printf("Hello %s" , name);

    return 0;
}