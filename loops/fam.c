//santiago L, family loop c

#include <stdio.h> 


int main(void){
char mii[][20] ={"Cinderella", "Dion", "Sebastian", "Mcqueen", "Emma", "Watson"};
int mlength = sizeof(mii)/sizeof(mii[0]);
int m = 0;
while(m<mlength){
    printf("Hello, %s Lagarde.\n", mii[m]);
    m++;
}
    return 0;
}