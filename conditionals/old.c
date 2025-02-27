//Santiago Lagarde, Old Enough C
#include <stdio.h>
#include <string.h>
int age;
int main(void){
printf("How old are you?\n");
scanf("%d", &age);
if (age >= 18 ){
    printf("Because you are %d, you can vote, drive, go to school and get your learners permit.\n", age);
}else if (age <18 && age >16){
    printf("Because you are only %d years old, you cant vote, but you can drive, get your learners permit and go to school.\n", age);
}else if (age <18 && age > 15){
    printf("Because you are %d, that means you can drive, get your learners permit and go to school, but you cant vote.\n", age);
}else if (age == 15){
    printf("Because your only %d, you can't drive or vote, but you can get your learners permit and go to school.\n", age);
}else if (age < 15 && age > 5){
    printf("Because your only %d, you can't get your learners permit, drive, or vote but you can go to school.\n", age);
}else{
    printf("Because you are only %d, you cannot to go to school, get your learners permit, drive, or vote.\n", age);
} 
    return 0;
}