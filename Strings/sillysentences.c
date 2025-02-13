//santiago L, silly sentences

#include <stdio.h> 
#include <string.h>
char name[20];
char verb[20];
char adj[20];
char friend[20];
int main(void){
printf("Hello, this program will create a silly sentence for you and your friends to laugh at. What is your name?\n");
scanf("%s", name);
printf("Now, pick your favorite verb.\n");
scanf("%s", verb);
printf("Great! Now, pick your favorite adjective.\n");
scanf("%s", adj);
printf("Nice! Finally, pick your favorite friend.\n");
scanf("%s", friend);
printf("Now.. The sentence is..\n");
printf("%s was on his way home from his %s day when all of a sudden, he %s into %s" , name, adj, verb, friend);
//introduce use rto program tell what is happenening
//create user inputs(printstatements for quesitons and scanf for input, # of variables)
//insert variables into sentence 2 show user (1 print sttement)
    return 0;
}