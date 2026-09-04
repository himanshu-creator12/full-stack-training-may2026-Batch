#include<stdio.h>
int main()
{
int number1;
int number2;
int number3;

printf("please enter the number:");
scanf("%d",&number1);

printf("please enter the number:");
scanf("%d",&number2);

printf("please enter the number:");
scanf("%d",&number3);
printf("\nAdditional Output:%d", number1 + number2 + number3);
printf("\nsubstraction:%d", number3-number2-number1);
printf("\nmultiplication:%d", number3*number2*number1);

return 0;
}