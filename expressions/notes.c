//santiago L, express notes C

#include <stdio.h> 
//integers = Int when variable set, %d when printed
//floats = float when varibale set, %f when printed
//strings (words) = char when variable set, %s when print
int mynum;
float percent;

int main(void){
printf("type a numb \n");
scanf("%d", &mynum);
printf(" you put %d\n", mynum );
printf("give me a percent as a decimal: \n");
scanf("%f", &percent);
printf("your percent is %f\n", percent);
    return 0;
}