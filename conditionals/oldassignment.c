#include <stdio.h> 
#include <time.h> 
int hour;

int main ()
{
    time_t rawtime;
    struct tm *timeinfo; 

    time(&rawtime); 
    timeinfo = localtime (&rawtime); 
    printf ("tell me the hour in military time (like 1-23):\n"); 
    scanf("%d", &hour); 
    if (hour <  12 && hour >=5){
    printf("Good Morning."); 
    }else if (hour<=18 && hour >=12){
        printf("Good Afternoon"); 
    }else if (hour>=19 && hour <=21){
        printf ("Good Evening.");
    }else{
      printf("Good Night.");
    }
    
    return 0; 
}