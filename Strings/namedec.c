//santiago L, template

#include <stdio.h> 
#include <string.h>

 char name[20];
 char decor1[20] = ("<---->");
 char decor2[20] = ("<---->");

int main(void){
printf("what is your name?");
scanf("%s", name);
strcat(decor1, name);
strcat(decor1, decor2);
printf("And your new name is..%s\n",decor1);

    return 0;
}