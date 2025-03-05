//santiago L, loop c

#include <stdio.h> 

int main(void){
//What is a loop? 
    //section of code the repeats
//What are the two types of loops?
//for loop
    int x;
    for(x=0; x<10;x++){
        printf("hello\n");
    }
// while loop
    int i=1;
    while(i<10){
        printf("%d\n",i);
        i++;
    }
//What is iteration
    //act of repeating
    //reference an iteration as specific time through the loop

//What are lists (arrays)? 
    //bunch of values in one variable
    //data type needed (int) for whatevers in list
    //blue brackets are what print (index # starts at 0)
    //purple brackets set how long itll be
//8 How do you make lists in C? (array)
int grades[] = {97,98,95,100,90};
grades[2] = 54; // updates grades 1 at a time
printf("%d\n", grades[3]);
printf("%d\n", grades[2]);
// tells how muhc bytes (list) (bit/bytses)
printf("%lu\n", sizeof(grades));

//how to get size of array (divide 1 item's bytes by the total of others to get # of items)
int length = sizeof(grades)/sizeof(grades[0]);
//How do you make for loops in C?
    //iterators should be x or i
int t;
    //in parents 1. starting point 2. go until point 3. what we count back
for (t=0;t<=11;t+=2){
 printf("%d\n",t);
}
int l;
for(l=0;l<length;l++){
    printf("%d\n", grades[l]);
}
//How do you make while loops in C?
//start iterator
int iterator = 100;
//while line sets stop and start point
while(iterator >= 100){
    printf("%d\n", iterator);
    //sets count
    iterator-=10;
}

char mii[][20] ={"Cinderella", "The Smurf Movie", "Transformers", "cars" "up", "1983"};
int mlength = sizeof(mii)/sizeof(mii[0]);
int m = 0;
while(m<mlength){
    printf("%s\n", mii[m]);
    m++;
}
    return 0;
}