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
printf("This calculator will help you deal with Finances.\n");
printf("How much do you make monthly?\n");
scanf("%f", &income);
printf("How much do you spend on Rent?\n");
scanf("%f", &rent  );
printf("How much do you spend on Utilities?\n");
scanf("%f", &utilities);
printf(" How much do you spend on Groceries\n");
scanf("%f", &groceries);
printf("How much do you spend on Transport?\n");
scanf("%f", &transport);
float savings = income/90;
float spending_money = income - (rent+utilities+groceries+transport+savings);
percent_rent = rent/income*100;
percent_utilities = utilities/income*100;
percent_transport = transport/income*100;
percent_groceries = groceries/income*100;
printf("You spend %.2f", percent_rent ); printf(" \npercent of your income on rent");
printf("You spend %.2f", percent_utilities ); printf(" \npercent of your incomeon utilities");
printf("You spend %.2f", percent_groceries ); printf(" \npercent of your income on groceries");
printf("You spend %.2f", percent_transport ); printf(" \npercent of your income on transport");
printf("You spend %.2f", percent_rent ); printf(" on rent");
printf("\n the amount of money You have saved is %.2f", savings); printf(" \ndollars");
printf("\n the amount of money You have to spend is %.2f", spending_money); printf(" \ndollars");
    return 0;
}