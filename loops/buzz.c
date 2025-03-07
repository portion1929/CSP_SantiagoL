//santiago L, fizz C

#include <stdio.h> 

int(nums) = 0;
int main(void){
while (nums >0 && nums < 51){
if(nums % 15 ==0){
    printf("FizzBuzz.\n");
}else if(nums % 5 == 0){
    printf("Buzz.\n");
}else if(nums % 3 == 0){
    printf("Fizz.\n");
}else{
    printf("%d\n", nums);
}
nums +=1;
}
    return 0;
}