//santiago L, stirng notes

#include <stdio.h> 
#include <string.h>
char name[20];

int main(void){
//printf("please tell me full name");
//scanf("%s", name);
//fgets(name, 20, stdin);
//printf("Hello %s, welcome to my proga", name);
//char sentence[] = "The quick black fox jumps over the white dog";
//printf("%lu\n", strlen(sentence));
 char one[] = "Hello ";
 char two[] = "World ";
 char three[] = "This my program ";
 two[5] = '?';
 strcat(one, two);
 printf("%s\n", one);
 strcat(three, one);
printf("%s\n", three);
    return 0;
}