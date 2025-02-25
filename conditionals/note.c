//santiago L, c note

#include <stdio.h> 
char name[] = "Vien";
int num = 8;

int main(void){
if(strcmp(name, "vienna") == 0){
    printf("hello. morase welcome class\n");
}else{
    printf("hello %s, welcome class\n", name);
}

// && = and
// || = or
// != is not

if(num > 5 && num < 10){
    if( num == 7){
        printf("%d is an unlucky number", num);
    }else{
        printf("%d is a large single digit number\n", num);
    }
    printf("%d is large sige #\n", num);
}else if (num > 10){
    printf("%d is not single didgit\n", num);
}else{
    printf("%d us a snakk subgke dugut bynber\n", num);
}
    return 0;
}