#include <stdio.h>

int main() {
    int number[20];
    int positive_number=0;
    int negative_number=0;
    
    printf("Enter 20 number:\n");

    for(int i=0;i<20;i++)

    {
        scanf("%d",&number[i]);
        if (number[i]>0)
        positive_number ++;
        else if (number[i]<0)
        negative_number ++;
    }
    printf("Positive_number=number%d\n",positive_number);
    printf("Negative_number=number%d\n",negative_number);

    return 0;
}