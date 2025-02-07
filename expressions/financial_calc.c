//santiago L, Financial Calc

#include <stdio.h> 
#include <math.h>
float income;
float rent;
float utilities;
float groceries;
float transport;

float percent_rent;
float percent_utilities;
float percent_groceries;
float percent_transport;

int main(void){
printf("This calculator will help you deal with Finances.");
printf("How much do you make monthly?");
scanf("%f", &income);
printf("How much do you spend on Rent?");
scanf("%f", &rent);
printf("How much do you spend on Utilities?");
scanf("%f", &utilities);
printf("How much do you spend on Groceries");
scanf("%f", &groceries);
printf("How much do you spend on Transport?");
scanf("%f", &transport);
float savings = income/90;
float spending_money = income - (rent+utilities+groceries+transport+savings);
    return 0;
}